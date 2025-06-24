#ifndef USER_H
#define USER_H
#include "Person.h"
#include "courses.h"
using namespace std;
class user :public Person {
    map<courses,int>registered_courses;
    map<int,set<courses>>semester_courses;
    public:
    user();
    void sign_Up(string id,string Fname,string Lname,string email,string password);
    set<courses> available_courses();
    float calculate_Total_GPA();
    float calculate_Semester_GPA(set<courses> s);
    void make_report();
    void view_grades();
    void register_course(string course_name);
    static float classify_grades(int grades,string& s);
    static string classify_gpa(float gpa);
    map<courses,int> get_registered_courses();
    map<int,set<courses>> get_semester_courses();
    bool update_semester_courses(int sem,courses s,bool c);
    bool update_registered_courses(courses s,int g,bool c);
};
#endif //USER_H
