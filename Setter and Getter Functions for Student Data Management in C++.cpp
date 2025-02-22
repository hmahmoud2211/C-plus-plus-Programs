#include <iostream>
#include <string>
#include <cstring>
using namespace std;

 
// setter student 
void set_student_name(string n){
    strcpy(student_name,n.c_str());
}
void set_student_ID(int n3)
{
    student_ID = n3;
}
void set_student_email(string n5)
{
    strcpy(student_email_username,n5.c_str());
}
void set_student_major(string n6){
    strcpy(student_major,n6.c_str());
}
void set_student_grades(float grade){
    student_grades=grade;
}

void set_student_score(float score){
    student_score=score;
}

void set_student_email_password(string n2){
    strcpy(student_email_password,n2.c_str());
}

// getter student 
string get_student_name()
{
    return student_name;
}
int get_student_ID()
{
    return student_ID;
}
string get_student_email()
{
    return student_email_username;
}
string get_student_major()
{
    return student_major;
}

float get_student_grades(){
    return student_grades;
}

float get_student_score(){
    return student_score;
}

string get_student_email_password()
{
    return student_email_password;
}
