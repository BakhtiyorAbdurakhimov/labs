#include "lab6.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double lab6::problem1(double num1, double num2) {
    return num1 * num2;
}

double lab6::problem2(double v1, double v2, double t) {
    if (t == 0) {
        return 0.0;
    }
    return (v2 - v1) / t;
}

void lab6::fun(double radius) {
    double circumference = 2 * M_PI * radius;
    double area = M_PI * radius * radius; // Or pow(radius, 2)
    cout << "Circumference is " << fixed << setprecision(1) << circumference << endl;
    cout << "Area is " << fixed << setprecision(1) << area << endl;
}

void lab6::fun(double a, double b) {
    double perimeter = 2 * (a + b);
    double area = a * b;
    cout << "Perimeter is " << fixed << setprecision(1) << perimeter << endl;
    cout << "Area is " << fixed << setprecision(1) << area << endl;
}

long long lab6::Factorial(int n) {
    if (n < 0) {
        return 0;
    }
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int lab6::minimum(int a, int b, int c) {
    int minVal = a;
    if (b < minVal) {
        minVal = b;
    }
    if (c < minVal) {
        minVal = c;
    }
    return minVal;
}

int lab6::maximum(int a, int b, int c) {
    int maxVal = a;
    if (b > maxVal) {
        maxVal = b;
    }
    if (c > maxVal) {
        maxVal = c;
    }
    return maxVal;
}

void lab6::displayEven(int number) {
    string s = to_string(number);
    bool foundEven = false;
    for (char digitChar : s) {
        int digit = digitChar - '0';
        if (digit % 2 == 0) {
            cout << digit << " ";
            foundEven = true;
        }
    }
    if (foundEven) {
        cout << endl;
    }
}

int lab6::cubeOfDigits(int number) {
    int sumOfCubes = 0;
    int temp = number;
    while (temp > 0) {
        int digit = temp % 10;
        sumOfCubes += pow(digit, 3);
        temp /= 10;
    }
    return sumOfCubes;
}

bool lab6::isArmstrong(int number) {
    return number == cubeOfDigits(number);
}

