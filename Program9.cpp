// Write a program to overload the + and - operators to find the sum of two numbers using member function and friend function.

#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    // Constructor to initialize the value
    Number(int v = 0) : value(v) {}

    // Overloading the + operator as a member function
    Number operator+(const Number &other) const {
        return Number(value + other.value);
    }

    // Function to display the value
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(20), num2(10);

    // Using overloaded + operator (member function)
    Number sum = num1 + num2;
    cout << "Sum: ";
    sum.display();

    return 0;
}
