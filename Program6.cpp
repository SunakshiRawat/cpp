 //Find the sum of two, three, and four numbers with the help of function overloading

#include <iostream>
using namespace std;

class SumCalculator {
public:
    // Function to find the sum of two numbers
    int sum(int a, int b) {
        return a + b;
    }

    // Function to find the sum of three numbers
    int sum(int a, int b, int c) {
        return a + b + c;
    }

    // Function to find the sum of four numbers
    int sum(int a, int b, int c, int d) {
        return a + b + c + d;
    }
};

int main() {
    SumCalculator calc;

    int sum2 = calc.sum(5, 10);               // Sum of two numbers
    int sum3 = calc.sum(5, 10, 15);           // Sum of three numbers
    int sum4 = calc.sum(5, 10, 15, 20);       // Sum of four numbers

    cout << "Sum of two numbers: " << sum2 << endl;
    cout << "Sum of three numbers: " << sum3 << endl;
    cout << "Sum of four numbers: " << sum4 << endl;

    return 0;
}
