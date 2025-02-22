# Student and Course Management System

This project is a **Student and Course Management System** implemented in C++. It allows users to manage student information (such as name, ID, email, major, grades, and GPA) and course details (such as course name, code, and cost). The system is designed to handle multiple students and courses, providing functionalities for registration, data retrieval, and GPA calculation.

---

## Table of Contents
1. [Project Structure](#project-structure)
2. [Features](#features)
3. [How to Use](#how-to-use)
4. [Code Overview](#code-overview)
5. [Dependencies](#dependencies)
6. [Compilation and Execution](#compilation-and-execution)

---

## Project Structure

The project consists of the following files:

1. **`student.h`**:  
   - Header file containing the `student_cpp` class definition.  
   - Includes private data members (e.g., student name, ID, email, grades) and public member functions (setters, getters, and utility functions).

2. **`student.cpp`**:  
   - Implementation file for the `student_cpp` class.  
   - Contains functions for registering students, calculating GPA, and displaying student information.

3. **`main.cpp`**:  
   - Main program file that interacts with the user.  
   - Allows the user to input and display information for multiple students and courses.

---

## Features

- **Student Management**:
  - Register students with details such as name, ID, email, major, grades, and password.
  - Calculate and store student GPA.
  - Display detailed student information.

- **Course Management**:
  - Add courses with details such as name, code, and cost.
  - Display course information.

- **User Interaction**:
  - Input and display data for multiple students and courses.
  - Simple and intuitive command-line interface.

---

## How to Use

1. **Input Student Data**:
   - The program will prompt you to enter the number of students.
   - For each student, provide details such as name, ID, email, major, grades, and password.

2. **Input Course Data**:
   - The program will prompt you to enter the number of courses.
   - For each course, provide details such as name, code, and cost.

3. **View Data**:
   - After entering the data, the program will display the information for all students and courses.

---

## Code Overview

### `student.h`
- Defines the `student_cpp` class with private data members and public member functions.
- Includes setters, getters, and utility functions for managing student data.

### `student.cpp`
- Implements the functions declared in `student.h`.
- Key functions:
  - `regester()`: Registers a new student.
  - `getinfo()`: Displays student information.
  - `Calculate_GPA()`: Calculates and sets the student's GPA.

### `main.cpp`
- Main program that interacts with the user.
- Uses the `student_cpp` class to manage student data and the `CCourse` class to manage course data.
- Allows the user to input and display data for multiple students and courses.

---

## Dependencies

- **C++ Compiler**: Ensure you have a C++ compiler installed (e.g., `g++`).
- **Standard Libraries**: The code uses standard C++ libraries such as `<iostream>`, `<string>`, and `<cstring>`.

---

## Compilation and Execution

1. **Compile the Code**:
   - Open a terminal and navigate to the directory containing the code files.
   - Run the following command to compile the code:
     ```bash
     g++ main.cpp student.cpp -o student_management
     ```

2. **Run the Program**:
   - Execute the compiled program using the following command:
     ```bash
     ./student_management
     ```

3. **Follow On-Screen Instructions**:
   - Enter the required details for students and courses as prompted.

---

## Example Output

```
Enter the number of students: 2

Student #1
Enter Your Full Name: John Doe
Enter Your ID: 12345
Enter Your College Email: john@college.edu
Enter Your Major: Computer Science
Enter the Grade number 1: 90
Enter the Grade number 2: 85
Enter the Grade number 3: 88
Enter the Grade number 4: 92
Enter the Grade number 5: 87
Enter Your password: password123

Student #2
...

Student Information:
Student #1
Student Name: John Doe
Student ID: 12345
Student Email: john@college.edu
Student Major: Computer Science
Student grade number 1: 90
Student grade number 2: 85
Student grade number 3: 88
Student grade number 4: 92
Student grade number 5: 87
Student score: 4.42
Student email's password: password123

...

Enter the number of courses: 1

course >>>>1
Enter course name: Programming 101
Enter course code: CS101
Enter course coast: 500

course Information:
course >>>>1
The course name: Programming 101
The course code: CS101
The course coast: 500
```

---

## Notes
- The program uses fixed-size character arrays for strings (e.g., student name, email). Ensure input lengths do not exceed the defined limits.
- The GPA calculation divides the sum of grades by 100. Adjust the logic if a different grading scale is required.
