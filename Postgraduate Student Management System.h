#include"student.h"
#include<iostream>
#include<cstring>
#include<string>

class CPG_Student : public student_cpp
{
    private : 
    string pg_student_job_title;

    public : 
    
    void set_pg_student_job(string title)
    {
        pg_student_job_title = title;
    }

    string get_pg_student_job()
    {
        return pg_student_job_title;
    }
};