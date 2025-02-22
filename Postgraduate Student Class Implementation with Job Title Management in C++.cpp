#include "bounes.h"
#include<iostream>
#include<cstring>
#include<string>

using namespace std;

CPG_Student :: CPG_Student ()
    {
        // defult
    }
   CPG_Student ::  ~ CPG_Student ()
    {
        // defult
    }

    void CPG_Student :: set_pg_student_job(string title)
    {
        pg_student_job_title = title;
    }

    string CPG_Student ::  get_pg_student_job()
    {
        return pg_student_job_title;
    }

