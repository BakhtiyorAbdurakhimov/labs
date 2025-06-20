#ifndef LAB6_H
#define LAB6_H

namespace std {

    class lab6 {
    public:
        double problem1(double num1, double num2);

        double problem2(double v1, double v2, double t);

        void fun(double radius);
        void fun(double a, double b);

        long long Factorial(int n = 1);

        int minimum(int a, int b, int c);
        int maximum(int a, int b, int c);

        void displayEven(int number);

        int cubeOfDigits(int number);
        bool isArmstrong(int number);
    };

}

#endif