#ifndef PERSON_H
#define PERSON_H
#include <bits/stdc++.h>
using namespace std;
class Person {
protected:
    string password, Fname, Lname, email,id;
    public:

    void sign_Up(string password,string Fname,string Lname,string email,string id);
    string get_password();
    string get_Fname() ;
    string get_Lname() ;
    string get_email() ;
    string get_id() ;
    void set_password(string password) ;
};
#endif //PERSON_H
