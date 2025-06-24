#include "courses.h"


courses::courses() {
    this->course_name="";
    this->instructor="";
    this->credit_hours=0;
    this->semester=0;
}

courses::courses(string course_name, string instructor, int credit_hours,int semester) {
    this->course_name.assign(course_name);
    this->instructor.assign(instructor);
    this->credit_hours=credit_hours;
    this->semester=semester;
}

string courses::get_instructor() {
    return this->instructor;
}

int courses::get_credit_hours() {
    return this->credit_hours;
}

int courses::get_semester() {
    return this->semester;
}

set<courses> courses::get_prerequisites() {
    return this->prerequisites;
}

bool courses::update_prerequisites(courses s, bool c) {
    if(c==false) {
        if(prerequisites.find(s) != prerequisites.end()) {
            prerequisites.erase(s);
            return true;
        }
        return false ;
    }
    else {
        if(prerequisites.find(s) == prerequisites.end()) {
            prerequisites.insert(s);
            return true;
        }
        return false;
    }
} // log(prerequisites.size())

string courses:: get_course_name() {
    return this->course_name;
}
