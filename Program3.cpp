//Create a a friend function to display a student's details in student class and class containing data members are name, age, department, and course

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
    // Constructor to initialize data members
    Student(string n, int a, string dept, string crs)
        : name(n), age(a), department(dept), course(crs) {}

    // Friend function declaration
    friend void displayDetails(const Student &student);
};

// Friend function definition
void displayDetails(const Student &student) {
    cout << "Student Details:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Department: " << student.department << endl;
    cout << "Course: " << student.course << endl;
}

int main() {
    string name, department, course;
    int age;

    cout << "Enter student's name: ";
    getline(cin, name);
    cout << "Enter student's age: ";
    cin >> age;
    cin.ignore();  // Clear newline character from the buffer
    cout << "Enter student's department: ";
    getline(cin, department);
    cout << "Enter student's course: ";
    getline(cin, course);

    // Creating an object of Student class
    Student studentObj(name, age, department, course);

    // Calling the friend function to display student details
    displayDetails(studentObj);

    return 0;
}
