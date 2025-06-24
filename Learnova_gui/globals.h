#ifndef GLOBALS_H
#define GLOBALS_H
#include "admin.h"
#include "courses.h"
#include "user.h"
#include<QPixmap>
using namespace std;

extern map<string,courses> all_courses; //course name
extern map<string,user> all_students; //student_email
extern map<string,admin> all_admins; //admin_email
extern string curr_student_email;
extern string curr_admin_email;
void read_admins_file();
void write_admins();
void read_courses();
void write_courses();
void read_user_data();
void write_users();
void rtrim(string& s);

#endif // GLOBALS_H
