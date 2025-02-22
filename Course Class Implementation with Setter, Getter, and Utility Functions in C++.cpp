#include "course.h"
#include<iostream>
#include<cstring>
#include<string>
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