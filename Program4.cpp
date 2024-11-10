//Create a friend class for three classes A, B, and C. Create private and protected data members in class A, B and C. Access all the privated and ptotected data with the help of friend class

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

    // Grant FriendClass access to private and protected members
    friend class FriendClass;
};

class B {
private:
    int privateB;

protected:
    int protectedB;

public:
    // Constructor to initialize private and protected members
    B(int pB, int protB) : privateB(pB), protectedB(protB) {}

    // Grant FriendClass access to private and protected members
    friend class FriendClass;
};

class C {
private:
    int privateC;

protected:
    int protectedC;

public:
    // Constructor to initialize private and protected members
    C(int pC, int protC) : privateC(pC), protectedC(protC) {}

    // Grant FriendClass access to private and protected members
    friend class FriendClass;
};

class FriendClass {
public:
    // Single function to display private and protected members of all classes
    void displayAll(const A &objA, const B &objB, const C &objC) {
        cout << "Class A - Private: " << objA.privateA <<