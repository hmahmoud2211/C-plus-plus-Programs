#include<iostream>
#include<cstring>
#include<string>

using namespace std;


class student_cpp
{
private:

string student_name;//c1
int student_ID;// c2
string student_email_username;// c3
string student_major;// c4
float student_grades[5];// c5
float student_score;//c6
string student_email_password;//c7

public:
student_cpp();
// setter
void set_student_name(string n);
void set_student_ID(int n3);
void set_student_email(string n5);
void set_student_major(string n6);
void set_student_grades(float grade,int i);
void set_student_score(float score);
void set_student_email_password(string n2);
// getter
string get_student_name();
int get_student_ID();
string get_student_email();
string get_student_major();
float get_student_grades(int i);
float get_student_score();
string get_student_email_password();
// function
void regester ();
void getinfo();
void Calculate_GPA ();
// constructor

~ student_cpp();
};


class CCourse
{
private:

char course_name[20];
char course_code[5];
float course_cost;

public:
CCourse();
// setter
void set_course_name(string nam);
void set_course_code(string code);
void set_course_cost(float coast);
//getter
string get_course_name();
string get_course_code();
float get_course_cost();
// function
void Add_course();
void getCourseInfo(); 
~CCourse();
};