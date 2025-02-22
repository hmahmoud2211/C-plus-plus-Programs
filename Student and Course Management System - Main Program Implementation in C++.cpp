#include <iostream>
#include "student.h"
#include "course.h"
#include <string>

using namespace std;

int main()
{
int  n_students;

    cout << "Enter the number of students: ";
    cin >> n_students;

    student_cpp students[n_students];
 for (int i = 0; i < n_students; i++) {
        cout << "\nStudent #" << i + 1 << endl;
        students[i].regester();
    }


    cout << "\nStudent Information:" << endl;
    for (int i = 0; i < n_students; i++) {
        cout << "\nStudent #" << i + 1 << endl;
        students[i].getinfo();
    }

     int  num_of_cousres;

    cout << "Enter the number of courses: ";
    cin >> num_of_cousres ;

    CCourse course[num_of_cousres];
 for (int i = 0; i <  num_of_cousres; i++) {
        cout << "\ncourse >>>>" << i + 1 << endl;
        course[i].Add_course();
    }


    cout << "\ncourse Information:" << endl;
    for (int i = 0; i < num_of_cousres ; i++) {
        cout << "\ncourse >>>>" << i + 1 << endl;
        course[i]. getCourseInfo();
    }

} 
