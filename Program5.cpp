//Create a friend function for three classes A, B, and C. Create private and protected data members in class A, B and C. Access all the private and protected data with the help of friend function

#include <iostream>
using namespace std;

class A {
private:
    int privateA;

protected:
    int protectedA;

public:
    // Constructor to initialize private and protected members
    A(int pA, int protA) : privateA(pA), protectedA(protA) {}

    // Friend function declaration
    friend void displayAllData(const A &objA, const B &objB, const C &objC);
};

class B {
private:
    int privateB;

protected:
    int protectedB;

public:
    // Constructor to initialize private and protected members
    B(int pB, int protB) : privateB(pB), protectedB(protB) {}

    // Friend function declaration
    friend void displayAllData(const A &objA, const B &objB, const C &objC);
};

class C {
private:
    int privateC;

protected:
    int protectedC;

public:
    // Constructor to initialize private and protected members
    C(int pC, int protC) : privateC(pC), protectedC(protC) {}

    // Friend function declaration
    friend void displayAllData(const A &objA, const B &objB, const C &objC);
};

// Friend function definition
void displayAllData(const A &objA, const B &objB, const C &objC) {
    cout << "Class A - Private: " << objA.privateA << ", Protected: " << objA.protectedA << endl;
    cout << "Class B - Private: " << objB.privateB << ", Protected: " << objB.protectedB << endl;
    cout << "Class C - Private: " << objC.privateC << ", Protected: " << objC.protectedC << endl;
}

int main() {
    // Creating objects of classes A, B, and C with initial values
    A objA(10, 20);
    B objB(30, 40);
    C objC(50, 60);

    // Calling the friend function to display all data
    displayAllData(objA, objB, objC);

    return 0;
}
