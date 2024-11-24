//Create a friend class for three classes A, B, and C. Create private and protected data members in class A, B and C. Access all the privated and ptotected data with the help of friend class

#include <iostream>
using namespace std;

class A {
private:
    int dataA = 10;
protected:
    int protectedDataA = 20;
    friend class FriendClass;
};

class B {
private:
    int dataB = 30;
protected:
    int protectedDataB = 40;
    friend class FriendClass;
};

class C {
private:
    int dataC = 50;
protected:
    int protectedDataC = 60;
    friend class FriendClass;
};

class FriendClass {
public:
    void display(A a, B b, C c) {
        cout << "Class A: " << a.dataA << ", " << a.protectedDataA << endl;
        cout << "Class B: " << b.dataB << ", " << b.protectedDataB << endl;
        cout << "Class C: " << c.dataC << ", " << c.protectedDataC << endl;
    }
};

int main() {
    A a;
    B b;
    C c;
    FriendClass f;
    f.display(a, b, c);
    return 0;
}
