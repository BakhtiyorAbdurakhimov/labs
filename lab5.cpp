#include "lab5.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

bool lab5::isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void lab5::problem1() {
    int num;
    cout << "Enter a sequence of integers (negative to stop): ";
    while (true) {
        cin >> num;
        if (num < 0) {
            break;
        }
        cout << num << endl;
    }
}

void lab5::problem2() {
    cout << "Numbers from 1 to 50 (skipping those divisible by 3 or 5): ";
    for (int i = 1; i <= 50; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
}

void lab5::problem3(int n) {
    double sum = 0.0;
    cout << "Harmonic series for n=" << n << ": ";
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i;
        cout << "1/" << i << (i == n ? "" : "+");
    }
    cout << endl;
    cout << fixed << setprecision(5) << "The sum is " << sum << endl; // Display sum with precision
}

int lab5::problem4(int N) {
    int currentNum = N + 1;
    while (true) {
        if (isPrime(currentNum)) {
            return currentNum;
        }
        currentNum++;
    }
}

int lab5::problem5(int num) {
    int sumOfDigits = 0;
    int temp = num;
    while (temp > 0) {
        sumOfDigits += temp % 10;
        temp /= 10;
    }
    return sumOfDigits;
}


int lab5::problem6(int num) {
    int reversed_num = 0;
    int temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        reversed_num = reversed_num * 10 + digit;
        temp /= 10;
    }
    return reversed_num;
}


void lab5::problem7() {
    srand(static_cast<unsigned int>(time(0)));
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < 1000; ++i) {
        int randomNumber = rand();
        if (randomNumber % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "After generating 1000 random integers:" << endl;
    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;
}