#include "user.h"
#include "courses.h"
#include <QFileDialog>
#include <QPdfWriter>
#include <QPainter>
#include <QString>
#include <QFont>
#include <QMessageBox>


extern map<string,courses>all_courses;


user::user() {
    this->password = "";
    this->Fname = "";
    this->Lname = "";
    this->email = "";
    this->id = "";
}


void user::sign_Up(string id, string Fname, string Lname, string email, string password) {
    this->id = id;
    this->Fname = Fname;
    this->Lname = Lname;
    this->email = email;
    this->password = password;
}




void user::register_course(string course_name) {
    registered_courses[all_courses[course_name]]=-1;  // log(registered_courses.size()) + log(all_courses.size())
    semester_courses[all_courses[course_name].get_semester()].insert(all_courses[course_name]); // log(semester_courses.size()) + log(all_courses.size()) + log(set<courses>.size())
}


set<courses> user::available_courses() {
    set<courses>available;
    for (auto &i:all_courses) {
        bool found = true;
        if(registered_courses.find(i.second)!=registered_courses.end()) {
            if(registered_courses[i.second]==-1 or registered_courses[i.second]>=60) {
                continue;
            }
        } // log(registered_courses.size())

        for(auto &j:i.second.get_prerequisites()) {

            if(registered_courses.find(j) == registered_courses.end()) {
                found = false;
                break;
            } // log(registered_courses.size())



            if(registered_courses[j]<60) {
                found = false;
                break;
            } // log(registered_courses.size())

        }  // log( registered_courses.size() ) * i.second.get_prerequisites().size()

        if(found) {
            available.insert(i.second); // log( available.size() )
        }

    }  // all_courses.size() * (  i.second.get_prerequisites().size() * log(registered_courses.size()) + log(available.size()) )

    return available;
}


string user::classify_gpa(float gpa){

    if(gpa==0.0){
        return "F";
    }
    if(gpa>0.0 and gpa<1.0) {
        return "D";
    }
    if (gpa>=1.0 and gpa<1.3) {
        return "D+";
    }
    if (gpa>=1.3 and gpa<1.7) {
        return "C-";
    }
    if (gpa>=1.7 and gpa<2.0) {
        return "C";
    }
    if (gpa>=2.0 and gpa<2.3) {
        return "C+";
    }
    if (gpa>=2.3 and gpa<2.7) {
        return "B-";
    }
    if (gpa>=2.7 and gpa<3.0) {
        return "B";
    }
    if (gpa>=3.0 and gpa<3.3) {
        return "B+";
    }
    if (gpa>=3.3 and gpa<3.7) {
        return "A-";
    }
    if (gpa>=3.7 and gpa<4) {
        return "A";
    }
    if (gpa==4) {
        return "A+";
    }
}


float user::classify_grades(int grades,string& s) {
    if(grades>=0 and grades<60) {
        s="F";
        return 0.0;
    }
    if (grades>=60 and grades<64) {
        s="D";
        return 1.0;
    }
    if (grades>=64 and grades<67) {
        s="D+";
        return 1.3;
    }
    if (grades>=67 and grades<70) {
        s="C-";
        return 1.7;
    }
    if (grades>=70 and grades<73) {
        s="C";
        return 2.0;
    }
    if (grades>=73 and grades<76) {
        s="C+";
        return 2.3;
    }
    if (grades>=76 and grades<80) {
        s="B-";
        return 2.7;
    }
    if (grades>=80 and grades<84) {
        s="B";
        return 3.0;
    }
    if (grades>=84 and grades<89) {
        s="B+";
        return 3.3;
    }
    if (grades>=89 and grades<93) {
        s="A-";
        return 3.7;
    }
    if (grades>=93 and grades<97) {
        s="A";
        return 4.0;
    }
    if (grades>=97 and grades<=100) {
        s="A+";
        return 4.0;
    }
}


float user::calculate_Total_GPA(){
    float gpa = 0.0;
    float total_hours = 0.0;
    string s;
    for (auto &i : registered_courses) {
        if (i.second == -1) {
            continue;
        }
        courses g = i.first;
        gpa += g.get_credit_hours() * classify_grades(i.second, s);
        total_hours += g.get_credit_hours();
    }   // registered_courses.size()


    if(total_hours==0.0){
        return 0.0;
    }
    gpa /= total_hours;
    return gpa;
}


float user::calculate_Semester_GPA(set<courses> courses){
    float gpa = 0.0;
    float total_hours = 0.0;
    string s;
    for (auto i : courses) {
        if (registered_courses[i] == -1) {
            continue;
        }
        gpa += i.get_credit_hours() * classify_grades(registered_courses[i], s);
        total_hours += i.get_credit_hours();
    }  // courses.size() * log ( registered_courses.size() )
    if(total_hours==0.0){
        return 0.0;
    }
    gpa /= total_hours;
    return gpa;
}


void user::make_report(){

    float gpa=calculate_Total_GPA();

    QString path = QFileDialog::getSaveFileName(nullptr, "Save Grade Report", "", "PDF Files (*.pdf)");
    if (path.isEmpty()) return;
    if (!path.endsWith(".pdf", Qt::CaseInsensitive)) {
        path += ".pdf";
    }

    QPdfWriter writer(path);
    writer.setPageSize(QPageSize::A4);
    writer.setResolution(300);

    QPainter painter(&writer);
    QFont font("Times New Roman", 30);
    painter.setFont(font);

    int y = 100;
    const int lineHeight = 100;
    painter.drawText(100, y, "Printable report of grades:");
    y += 2 * lineHeight;

    QFont font1("Times New Roman", 24);
    painter.setFont(font1);

    QString s="Name: ";
    s+=Fname+" "+Lname;
    painter.drawText(100, y,s);
    y += lineHeight;
    s="ID: ";
    s+=id;
    painter.drawText(100, y,s);
    y += 2 * lineHeight;
    int cntr=0;
    for (auto &sem : semester_courses ) {
        painter.drawText(100, y, "Grades of semester " + QString::number(sem.first) + ":");
        y += (1.5*lineHeight);
        int cntr1=0;
        for (auto course : sem.second) {
            painter.drawText(200, y, "- Course name: " + QString::fromStdString(course.get_course_name()));
            y += lineHeight;
            if (registered_courses[course] == -1) {
                painter.drawText(260, y, "You haven't finished this course yet.");
            }
            else {
                string grade;
                user::classify_grades(registered_courses[course], grade);
                painter.drawText(260, y, "Grade: " + QString::fromStdString(grade));
            }
            cntr1++;
            if(cntr1!=sem.second.size()){
                y += 2*lineHeight;
            }
        }
        cntr++;
        if(cntr!=semester_courses.size()){
            y += 2*lineHeight;
        }
    }
    y += 2.5*lineHeight;
    painter.drawText(100, y, "Overall GPA: " + QString::number(gpa));
    painter.end();
    QMessageBox::information(nullptr, "PDF Saved", "The PDF file has been saved successfully.");
}


map<int, set<courses>> user::get_semester_courses() {
    return semester_courses;
}


map<courses, int> user::get_registered_courses() {
    return registered_courses;
}


bool user::update_registered_courses(courses s, int g,bool c) {
    if(c==false) {
        if(registered_courses.find(s) != registered_courses.end()) {
            registered_courses.erase(s);
            return true;
        }
        return false ;
    }
    else {
        registered_courses[s]=g;
        return true;
    }
}  // log(registered_courses.size())


bool user::update_semester_courses(int sem, courses s,bool c) {
    if(c==false) {
        if(semester_courses.find(sem) != semester_courses.end()) {
            if(semester_courses[sem].find(s)!=semester_courses[sem].end()){
                semester_courses[sem].erase(s);
                if(semester_courses[sem].empty()){
                    semester_courses.erase(sem);
                }
                return true;
            }
            else{
                return false;
            }
        }
        return false;
    }
    else {
        if(semester_courses[sem].find(s)==semester_courses[sem].end()){
            semester_courses[sem].insert(s);
            return true;
        }
        else{
            return false;
        }
    }
}  // log(semester_courses.size()) + log (set<courses>.size())

