#include "lab7.h"
#include <iostream>
#include <cmath>

using namespace std;
int value = 10;

void lab7::sayHello() {
    static int callCount = 0;
    callCount++;
    cout << "Hello! (Called " << callCount << " times)" << endl;
}

void lab7::addToSum(int x) {
    static int totalSum = 0;
    totalSum += x;
    cout << "Current sum: " << totalSum << endl;
}

void lab7::updateMax(int x) {
    static int currentMax = -2147483647;
    if (x > currentMax) {
        currentMax = x;
    }
    cout << "Max so far: " << currentMax << endl;
}

void lab7::swap(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

void lab7::power_two(int &x) {
    x = static_cast<int>(pow(x, 2));
}

void lab7::reverseDigits(int &x) {
    int reversedNum = 0;
    int temp = x;
    while (temp > 0) {
        int digit = temp % 10;
        reversedNum = reversedNum * 10 + digit;
        temp /= 10;
    }
    x = reversedNum;
}

void lab7::fun() {
    int value = 5;
    cout << "Inside fun() - Local value: " << value << endl;
    cout << "Inside fun() - Global value: " << ::value << endl;
}

int lab7::sum_numbers(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return n + sum_numbers(n - 1);
}

void lab7::print_numbers(int n) {
    if (n <= 0) {
        return;
    }
    print_numbers(n - 1);
    cout << n << " ";
}

long long lab7::factorial_recursive(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}
