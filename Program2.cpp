//Create a friend class to check if a number is prime or not

#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    // Constructor to initialize the number
    Number(int n) : num(n) {}

    // Declare FriendClass as a friend
    friend class FriendClass;
};

class FriendClass {
public:
    // Function to check if the number is prime
    void isPrime(Number n) {
        int num = n.num;
        bool prime = true;

        if (num <= 1) {
            prime = false;
        } else {
            for (int i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    prime = false