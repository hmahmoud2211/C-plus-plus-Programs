#include "student.h"
#include<iostream>
#include<cstring>
using namespace std;



// STUDENT

// FUNCTIONS

//1

void student_cpp :: regester ()
{
    string name;
    int id;
    string email;
    string major;
    float grades;
    string pass;
    cout << "Enter Your Full Name : ";
    getline(cin,name);
    getchar();
    cout << "Enter Your ID : ";
    cin >> id;
    cout << "Enter Your College Email : ";
    cin >> email;
    cout << "Enter Your Major : ";
    cin >> major;
    for (int i =0;i<5;i++){
    cout << "Enter the Grade number "<<i+1<<" : ";
    cin >> grades;
    set_student_grades(grades,i);
    }
    cout << "Enter Your password : ";
    cin >> pass;
    set_student_name(name);
    set_student_ID(id);
    set_student_email(email);
    set_student_major(major);
    set_student_email_password(pass);
}

// 2

void student_cpp :: getinfo()
{
    cout <<"Student Name : "<<get_student_name()<< "\n";
    cout <<"Student ID : "<< get_student_ID()<< "\n";
    cout <<"Student Email : "<< get_student_email()<< "\n";
    cout <<"Student Major : "<< get_student_major()<< "\n";
    for (int i =0;i<5;i++){
    cout <<"Student grade number "<< i+1 << " : "<< get_student_grades(i)<< "\n";
    }
    cout <<"Student score : "<< get_student_score()<< "\n";
    cout <<"Student email's password : "<< get_student_email_password()<< "\n";
}

// 3

void student_cpp :: Calculate_GPA ()
{
    float sum = 0;
    float calc;
    for (int i =0;i<5;i++)
    {
        sum += get_student_grades(i);
    }
    calc = sum / 100;
    set_student_score (calc);
}

//4

student_cpp :: student_cpp()
{
    
}
// SETTER AND GETTER FUNCTIONS OF STUDENT

// setter student 

void student_cpp :: set_student_name(string n){
    strcpy(student_name,n.c_str());
}
void student_cpp :: set_student_ID(int n3)
{
    student_ID = n3;
}
void student_cpp :: set_student_email(string n5)
{
    strcpy(student_email_username,n5.c_str());
}
void student_cpp :: set_student_major(string n6){
    strcpy(student_major,n6.c_str());
}

void student_cpp :: set_student_grades(float grade,int i){
    student_grades[i] = grade;
}

void student_cpp :: set_student_score(float score){
    student_score=score;
}

void student_cpp :: set_student_email_password(string n2){
    strcpy(student_email_password,n2.c_str());
}

// getter student 
string student_cpp :: get_student_name()
{
    return student_name;
}
int student_cpp :: get_student_ID()
{
    return student_ID;
}
string student_cpp :: get_student_email()
{
    return student_email_username;
}
string student_cpp :: get_student_major()
{
    return student_major;
}

float student_cpp :: get_student_grades(int i){
    return student_grades[i];
}

float student_cpp :: get_student_score(){
    return student_score;
}

string student_cpp :: get_student_email_password()
{
    return student_email_password;
}


student_cpp :: ~student_cpp()
{
    
}
// -----------------------------------------------------------------------------------------------------------

// COURSE 


CCourse::CCourse()
{
    //ctor
}


// setter

void CCourse :: set_course_name(string nam){
    strcpy(course_name,nam.c_str());
}

void CCourse :: set_course_code(string code){
    strcpy(course_code,code.c_str());
}

void CCourse :: set_course_cost(float coast){
    course_cost = coast;
}

//getter

string CCourse :: get_course_name()
{
    return course_name;
}
string CCourse :: get_course_code()
{
    return course_code;
}
float CCourse :: get_course_cost(){
    return course_cost;
}

// COURSE FUNCTIONS

// 1

void CCourse :: Add_course()
{
    string name;
    string cod;
    float coste;
    
    cout <<"Enter course name : ";
    cin >> name;
    cout <<"Enter course code : ";
    cin >> cod;
    cout <<"Enter course coast : ";
    cin >> coste;
    set_course_name(name);
    set_course_code(cod);
    set_course_cost(coste);    
}

// 2

void CCourse :: getCourseInfo() 
{
    cout <<"The course name : "<<get_course_name() << "\n";
    cout <<"The course code : "<<get_course_code() << "\n";
    cout <<"The course coast : "<<get_course_cost() << "\n";
}
CCourse::~CCourse()
{
    //dtor
}