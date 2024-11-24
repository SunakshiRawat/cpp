//Create a program on hybrid inheritance where we have five classes A, B, C, D and E. Class B, C and D inherit from class A and class E inherit from class B.

#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "This is class A" << endl;
    }
};


class B : public A {
public:
    void displayB() {
        cout << "This is class B" << endl;
    }
};


class C : public A {
public:
    void displayC() {
        cout << "This is class C" << endl;
    }
};


class D : public A {
public:
    void displayD() {
        cout << "This is class D" << endl;
    }
};


class E : public B {
public:
    void displayE() {
        cout << "This is class E" << endl;
    }
};

int main() {
    
    A a;
    B b;
    C c;
    D d;
    E e;

    
    a.displayA();
    b.displayA(); 
    b.displayB();
    c.displayA(); 
    c.displayC();
    d.displayA(); 
    d.displayD();
    e.displayA(); 
    e.displayB(); 
    e.displayE();

    return 0;
}
