//Write a program to create a template for classes and implement student's data with name, age, course, and department

#include <iostream>
#include <string>
using namespace std;

// Template class to store student data
template <typename T>
class Student {
private:
    string name;
    int age;
    T course;
    T department;

public:
    // Constructor to initialize the student data
    Student(string n, int a, T c, T d) : name(n), age(a), course(c), department(d) {}

    // Function to display student data
    void displayStudentInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Creating Student object with string type for course and department
    Student<string> student1("John Doe", 20, "Computer Science", "Engineering");
    
    // Displaying student1's data
    student1.displayStudentInfo();
    cout << endl;

    // Creating another Student object with a different course and department type
    Student<string> student2("Jane Smith", 22, "Mechanical Engineering", "Engineering");
    
    // Displaying student2's data
    student2.displayStudentInfo();
    cout << endl;

    // You can also create students using other types if needed, e.g., int for numeric data types
    // Student<int> student3("Bob Johnson", 21, 101, 200); // Example of numeric type

    return 0;
}
