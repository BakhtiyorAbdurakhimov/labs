
#include "lab1.h"
#include <iostream>
#include <cmath>

using namespace std;

void lab1::sumOfTwoNumbers() {
    int a, b;
    cin >> a >> b;
    cout << "Sum: " << a << " + " << b << " = " << a + b << endl;
}

void lab1::calculateT() {
    double x, y;
    cin >> x >> y;
    double t = (3 * (pow(x, 2) + 3)) / (y + 4 + 3);
    cout << "t=" << t << endl;
}

void lab1::compareIntegers() {
    int a, b;
    cin >> a >> b;
    cout << "Is a < b ? " << (a < b) << endl;
    cout << "Is a > b ? " << (a > b) << endl;
    cout << "Is a == b ? " << (a == b) << endl;
}

void lab1::averageAcceleration() {
    double v0, v1, t;
    cin >> v0 >> v1 >> t;
    double a = (v1 - v0) / t;
    cout << a << endl;
}

void lab1::transformNumber() {
    int num;
    cin >> num;
    num = ((num - 1) * 7 - 14) / 12 + 3;
    int r = num % 3;
    cout << num << endl;
    cout << r << endl;
}

void lab1::areaOfSphere() {
    double d;
    cin >> d;
    double r = d / 2;
    double area = 4 * M_PI * r * r;
    cout << "Area: " << area << endl;
}

void lab1::sumComparison() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum1 = a + b;
    int sum2 = c + d;
    cout << "Sum of first pair: " << sum1 << endl;
    cout << "Sum of second pair: " << sum2 << endl;
    cout << "Is first sum1 < sum2? " << (sum1 < sum2) << endl;
    cout << "Is first sum1 > sum2? " << (sum1 > sum2) << endl;
    cout << "Are the sums equal? " << (sum1 == sum2) << endl;
}