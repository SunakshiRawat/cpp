//Find the sum of three numbers with the help of function overloading. Display the sum of base class with the help of derived class object and vice versa

#include <iostream>
using namespace std;

class Base {
public:
    // Function to find the sum of three numbers in Base class
    virtual int sum(int a, int b, int c) {
        cout << "Base class sum: ";
        return a + b + c;
    }
};

class Derived : public Base {
public:
    // Overriding the sum function in Derived class
    int sum(int a, int b, int c) override {
        cout << "Derived class sum: ";
        return a + b + c;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Using Derived class object to call Base class function
    cout << baseObj.sum(10, 20, 30) << endl;

    // Using Base class pointer to call Derived class overridden function
    Base *basePtr = &derivedObj;
    cout << basePtr->sum(10, 20, 30) << endl;

    return 0;
}

