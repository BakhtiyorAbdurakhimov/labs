#ifndef LAB7_H
#define LAB7_H

using namespace std;

extern int value;

class lab7 {
public:
    void sayHello();
    void addToSum(int x);
    void updateMax(int x);
    void swap(int& a, int& b);
    void power_two(int &x);
    void reverseDigits(int &x);
    void fun();
    int sum_numbers(int n);
    void print_numbers(int n);
    long long factorial_recursive(int n);
};

#endif