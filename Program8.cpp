//Write a program to overload the increment (++)  operator to increment value by 5, decrement (--) operator to decremrnt value by 1, and negation (-) operator to change the value a form -ve to +ve and +ve to -ve using  member function and friend function.

#include <iostream>
using namespace std;

class Number {
private:
    int a;

public:
    // Constructor to initialize the value of a
    Number(int value) : a(value) {}

    // Overloading increment operator as a member function (prefix)
    Number& operator++() {
        a += 5;
        return *this;
    }

    // Overloading decrement operator as a member function (prefix)
    Number& operator--() {
        a -= 1;
        return *this;
    }

    // Overloading negation operator as a friend function
    friend Number operator-(Number& obj);

    // Function to display the value of a
    void display() const {
        cout << "Value of a: " << a << endl;
    }
};

// Definition of the negation operator as a friend function
Number operator-(Number& obj) {
    obj.a = -obj.a;
    return obj;
}

int main() {
    Number num(10);  // Initializing num with value 10

    cout << "Initial ";
    num.display();

    // Increment operator (adds 5)
    ++num;
    cout << "After increment ";
    num.display();

    // Decrement operator (subtracts 1)
    --num;
    cout << "After decrement ";
    num.display();

    // Negation operator (changes the sign)
    -num;
    cout << "After negation ";
    num.display();

    return 0;
}
