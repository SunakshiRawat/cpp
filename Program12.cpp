//Write a program to create a template for structures and implement student's data with name, age, course, and department

#include <iostream>
#include <string>
using namespace std;

// Template structure for Student data
template <typename T>
struct Student {
    string name;
    int age;
    T course;
    T department;

    // Function to display student information
    void displayStudentInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Creating a Student object with string type for course and department
    Student<string> student1;
    student1.name = "John Doe";
    student1.age = 20;
    student1.course = "Computer Science";
    student1.department = "Engineering";

    // Displaying student1's data
    student1.displayStudentInfo();
    cout << endl;

    // Creating another Student object with different course and department data
    Student<string> student2;
    student2.name = "Jane Smith";
    student2.age = 22;
    student2.course = "Mechanical Engineering";
    student2.department = "Engineering";

    // Displaying student2's data
    student2.displayStudentInfo();
    cout << endl;
