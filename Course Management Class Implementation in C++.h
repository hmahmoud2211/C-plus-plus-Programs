#include<iostream>
#include<cstring>
#include<string>
using namespace std;

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
