#include "globals.h"
using namespace std;
map<string,courses> all_courses;// course name
map<string,user> all_students;//student_email
map<string,admin> all_admins;//admin_email
string curr_student_email="";
string curr_admin_email = "";

void rtrim(string& s) {
    s.erase(s.find_last_not_of(" \t\n\r\f\v") + 1);
}

void read_admins_file() {
    ifstream file("admin.csv");
    if (!file.is_open()) {
        cerr << "Failed to open admin.csv" << endl;
        return;
    }
    string line;
    int i = 0;
    while (getline(file, line)) {
        stringstream ss(line);
        if (i == 0) {
            i++;
            continue;
        }
        int cntr=0;
        string password, Fname, Lname, email, id;
        string cell;
        while (getline(ss, cell, ',')) {
            rtrim(cell);
            if(!cell.empty()){
                if(cntr==0){
                    password=cell;
                }
                else if(cntr==1){
                    Fname=cell;
                }
                else if(cntr==2){
                    Lname=cell;
                }
                else if(cntr==3){
                    email=cell;
                }
                else if(cntr==4){
                    id=cell;
                }
            }
            cntr++;
        }
        admin *c=new admin(password, Fname, Lname, email,id);

        all_admins[email]=*c;
    }
    file.close();
}


void write_admins() {
    ofstream file("admin.csv");
    if (!file.is_open()) {
        cerr << "Failed to open admin.csv" << endl;
        return;
    }
    file << "Password,Fname,Lname,Email,id\n";

    for ( auto &a : all_admins) {
        file << a.second.get_password() << "," << a.second.get_Fname() << "," << a.second.get_Lname()<< "," << a.first << "," << a.second.get_id() << "\n";
    }

    file.close();
}


void read_courses() {
    ifstream file("courses.csv");
    if (!file.is_open()) {
        cerr << "Failed to open courses.csv" << endl;
        return;
    }

    string line;
    int i = 0;

    vector<vector<string>> all_lines;

    while (getline(file, line)) {
        if (i == 0) {
            i++;
            continue;
        }
        stringstream ss(line);
        vector<string> v;
        string cell;
        while (getline(ss, cell, ',')) {
            rtrim(cell);
            if(!cell.empty()){
                v.push_back(cell);
            }
        }
        all_lines.push_back(v);
    }
    file.close();


    int sortColumn = 3;
    sort(all_lines.begin(), all_lines.end(), [sortColumn](const vector<string>& a, const vector<string>& b) {
        return stoi(a[sortColumn]) < stoi(b[sortColumn]);
    }); // sorting using semesters column

    for (auto v : all_lines) {
        courses *c=new courses(v[0], v[1], stoi(v[2]), stoi(v[3]));
        if(v.size()>=5) {
            for (int i1 = 4; i1 < v.size(); i1++) {
                if (v[i1].empty() or all_courses.find(v[i1]) == all_courses.end()){
                    continue;
                }
                c->update_prerequisites(all_courses[v[i1]],true);
            }
        }
        all_courses[v[0]] = *c;
    }
}


void write_courses() {
    ofstream file("courses.csv");
    if (!file.is_open()) {
        cerr << "Failed to open courses.csv" << endl;
        return;
    }
    file << "course name,instructor,credit hour,semester,pres\n";

    for ( auto & i : all_courses) {
        file << i.second.get_course_name() << ",";
        file << i.second.get_instructor() << ",";
        file << i.second.get_credit_hours() << ",";
        file << i.second.get_semester();
        for (auto p : i.second.get_prerequisites()) {
            file << "," << p.get_course_name();
        }
        file << "\n";
    }
    file.close();
}


void read_user_data() {
    ifstream file("users.csv");
    if (!file.is_open()) {
        cerr << "Failed to open users.csv" << endl;
        return;
    }
    string line;
    int i = 0;

    vector<vector<string>> all_lines;

    while (getline(file, line)) {
        if (i == 0) {
            i++;
            continue;
        }

        stringstream ss(line);
        vector<string> v;
        string cell;
        while (getline(ss, cell, ',')) {
            rtrim(cell);
            if(!cell.empty()){
                v.push_back(cell);
            }
        }
        all_lines.push_back(v);
    }
    file.close();

    for (auto v : all_lines) {
        user& c =all_students[v[3]];
        c.sign_Up(v[0],v[1],v[2],v[3], v[4]);
        if(v.size()>=6) {
            for (int i1 = 5; i1 < v.size(); i1+=2) {
                if (v[i1].empty() or v[i1+1].empty() or all_courses.find(v[i1]) == all_courses.end()){
                    continue;
                }
                c.update_registered_courses(all_courses[v[i1]],stoi(v[i1+1]),true);
                c.update_semester_courses(all_courses[v[i1]].get_semester(),all_courses[v[i1]],true);
            }
        }
    }
}


void write_users() {
    ofstream file("users.csv");
    if (!file.is_open()) {
        cerr << "Failed to open users.csv" << endl;
        return;
    }
    file << "id,First name,Last name,email,password,regis_courses\n";

    for ( auto &i : all_students) {
        file << i.second.get_id() << ",";
        file << i.second.get_Fname()<< ",";
        file << i.second.get_Lname() << ",";
        file << i.second.get_email() << ",";
        file << i.second.get_password();
        for(auto &j:i.second.get_registered_courses()) {
            courses h = j.first;
            file<<","<<h.get_course_name()<<","<<j.second;
        }
        file << "\n";
    }
    file.close();
}
