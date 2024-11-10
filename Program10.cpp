//Write a program to create a template for functions and implement function overloading

#include <iostream>
using namespace std;

// Template function for addition
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Overloaded add function for two integers
int add(int a, int b) {
    cout << "Adding integers: ";
    return a + b;
}

// Overloaded add function for two floating-point numbers
float add(float a, float b) {
    cout << "Adding floating-point numbers: ";
    return a + b;
}

int main() {
    // Using the template function to add two integers
    int intSum = add(10, 20);
    cout << intSum << endl;

    // Using the template function to add two floating-point numbers
    float floatSum = add(10.5f, 20.3f);
    cout << floatSum << endl;

    // Using the overloaded add function for integers
    int intSumOverloaded = add(5, 15);
    cout << intSumOverloaded << endl;

    // Using the overloaded add function for floating-point numbers
    float floatSumOverloaded = add(5.5f, 15.5f);
    cout << floatSumOverloaded << endl;

    return 0;
}
