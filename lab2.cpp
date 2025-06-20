#include "lab2.h"
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void lab2::checkSign() {
    int x;
    cin >> x;
    if (x > 0)
        cout << "Positive" << endl;
    else if (x < 0)
        cout << "Negative" << endl;
    else
        cout << "Neither positive nor negative" << endl;
}

void lab2::largestOfThree() {
    int a, b, c;
    cin >> a >> b >> c;
    int maxVal = max(a, max(b, c));
    cout << maxVal << " is the largest" << endl;
}

void lab2::fizzBuzzCheck() {
    int n;
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0)
        cout << "FizzBuzz" << endl;
    else if (n % 3 == 0)
        cout << "Fizz" << endl;
    else if (n % 5 == 0)
        cout << "Buzz" << endl;
    else
        cout << "Not divisible by 3 or 5" << endl;
}

void lab2::solveQuadratic() {
    double a, b, c;
    cin >> a >> b >> c;
    double d = b*b - 4*a*c;
    if (d > 0) {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        cout << "x1=" << x1 << endl;
        cout << "x2=" << x2 << endl;
    } else if (d == 0) {
        double x = -b / (2 * a);
        cout << "x1=x2=" << x << endl;
    } else {
        cout << "No real roots" << endl;
    }
}

void lab2::triangleType() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            cout << "Equilateral" << endl;
        else if (a == b || b == c || a == c)
            cout << "Isosceles" << endl;
        else
            cout << "Scalene" << endl;
    } else {
        cout << "Not a triangle" << endl;
    }
}

void lab2::checkAlphabet() {
    char ch;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase alphabet" << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << "Lowercase alphabet" << endl;
    else
        cout << "It is not an alphabet" << endl;
}

void lab2::isPalindrome() {
    int n;
    cin >> n;
    int hundreds = n / 100;
    int units = n % 10;
    if (n >= 100 && n <= 999 && hundreds == units)
        cout << n << " is a palindrome" << endl;
    else
        cout << n << " is not a palindrome" << endl;
}

void lab2::evenOddDigits() {
    int n;
    cin >> n;
    int even = 0, odd = 0;
    for (int i = 0; i < 4; ++i) {
        int digit = n % 10;
        if (digit % 2 == 0)
            ++even;
        else
            ++odd;
        n /= 10;
    }
    if (even > odd)
        cout << "More even digits" << endl;
    else if (odd > even)
        cout << "More odd digits" << endl;
    else
        cout << "Equal even and odd digits" << endl;
}
