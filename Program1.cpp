//Create an inline function in student class to display the sum of two numbers.

#include <iostream>
using namespace std;

class Student {
public:
    // Inline function to calculate and display the sum of two numbers
    void incline(int a, int b) {
        cout << "The sum of " << a << " and " << b << " is: " << (a + b) << endl;
    }
};

int main() {
    // Creating an object of Student class
    Student studentObj;

    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calling the incline function to display the sum
    studentObj.incline(num1, num2);

    return 0;
}
