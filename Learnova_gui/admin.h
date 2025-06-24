#ifndef ADMIN_H
#define ADMIN_H
#include "Person.h"
using namespace std;

class admin :public Person {
public:


    admin();

	admin(string password, string Fname, string Lname, string email, string id);

    void add_course(string course_name,int credit,string instructor,int semester);

    void remove_course(string course_name);

    bool add_prerequisite(string choice,string course_name);

    void manage_grades();

    bool remove_prerequisite(string choice,string course_name );

    void add_admin(string pass, string fname, string lname, string email, string id);

};

#endif //ADMIN_H
