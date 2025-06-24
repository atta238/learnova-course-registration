#ifndef COURSES_H
#define COURSES_H
#include <bits/stdc++.h>
using namespace std;
class courses {
    string instructor,course_name;
    int credit_hours,semester;
    set<courses>prerequisites;
public:

    bool operator<(const courses& other) const {
        return this->course_name < other.course_name;
    }
    courses();
    courses(string course_name,string instructor, int credit_hours,int semester);
    string get_course_name();
    string get_instructor();
    int get_credit_hours();
    int get_semester();
    set<courses> get_prerequisites();
    bool update_prerequisites(courses s,bool c);
};


#endif //COURSES_H
