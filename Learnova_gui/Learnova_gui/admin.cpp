#include "admin.h"
#include "courses.h"
#include "user.h"
#include<QFileDialog>
#include<QMessageBox>
extern map<string,courses> all_courses;
extern map<string,user> all_students;
extern map<string,admin> all_admins;



admin::admin(){
    this->password = "";
    this->Fname = "";
    this->Lname = "";
    this->email = "";
    this->id = "";
}



admin::admin(string password, string Fname, string Lname, string email, string id) {
    this->password = password;
    this->Fname = Fname;
    this->Lname = Lname;
    this->email = email;
    this->id = id;
}


void admin::add_course(string course_name,int credit,string instructor,int semester) {
    courses *obj = new courses(course_name, instructor, credit,semester);
    all_courses[course_name] = *obj; // log( all_courses.size() )
}


void admin::remove_course(string course_name){
    for(auto &i :all_courses){
        this->remove_prerequisite(course_name,i.first);
    } //           allcourses.size() * ( log(all_courses.size()) + log(prerequisites.size()) )
    for(auto &i:all_students){
        i.second.update_registered_courses(all_courses[course_name],-1,false);
        i.second.update_semester_courses(all_courses[course_name].get_semester(),all_courses[course_name],false);
    }   //          allstudents.size() * (log(registered_courses.size()) + log(semester_courses.size()))

    all_courses.erase(course_name); // log(all_courses.size())
}


void admin::manage_grades() {

    QString filePath = QFileDialog::getOpenFileName(nullptr, "Open CSV File", "", "CSV Files (*.csv);;All Files (*)");
     if (!filePath.isEmpty()) {
        ifstream file(filePath.toStdString());
        string line;
        int i = 0;
        while (getline(file, line)) {
            stringstream ss(line);
            if (i == 0) {
                i++;
                continue;
            }
            int cntr=0;
            string cell;
            string id;
            string name;
            int grade;
            while (getline(ss, cell, ',')) {
                stringstream clean_cell(cell);
                string trimmed;
                clean_cell >> ws >> trimmed;
                if(!trimmed.empty() and trimmed!=" "){
                    if(cntr==0){
                        id=trimmed;
                    }
                    else if(cntr==1){
                        name=trimmed;
                    }
                    else if(cntr==2){
                        grade=stoi(trimmed);
                    }
                }
                cntr++;
            }
            for(auto &j: all_students){
                if(j.second.get_id()==id){
                    if(all_courses.find(name) != all_courses.end() and
                    j.second.get_registered_courses().find(all_courses[name])!=j.second.get_registered_courses().end() and
                    (grade>=0 and grade<=100) ) {
                        j.second.update_registered_courses(all_courses[name],grade,true);
                    }
                }
            }
        }
        file.close();
         QMessageBox::information(nullptr, "CSV Uploaded", "The CSV file of grades has been uploaded successfully .");
     }
     else{
          QMessageBox::information(nullptr, "No File", "No file selected.");
     }
}


void admin::add_admin(string pass, string fname, string lname, string email, string id) {
    admin*h = new admin(pass,fname,lname,email,id);
    all_admins[email]=*h;   // log( all_admins.size() )
}


bool admin::add_prerequisite(string choice,string course_name) {
    return all_courses[course_name].update_prerequisites(all_courses[choice],true);  // log( all_courses.size() ) + log( prerequisites.size() )
}


bool admin::remove_prerequisite(string choice,string course_name ) {
    return all_courses[course_name].update_prerequisites(all_courses[choice],false);  // log( all_courses.size() )+ log( prerequisites.size() )
}
