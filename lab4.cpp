#include "lab4.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void lab4::problem1() {
    int sum = 0;
    cout << "First 10 natural numbers: ";
    for (int i = 1; i <= 10; ++i) {
        cout << i << (i == 10 ? "" : ", ");
        sum += i;
    }
    cout << endl;
    cout << "Sum: " << sum << endl;
}

void lab4::problem2(int n) {
    cout << "Numbers divisible by 10 up to " << n << ": ";
    bool first = true;
    for (int i = 1; i <= n; ++i) {
        if (i % 10 == 0) {
            if (!first) {
                cout << ", ";
            }
            cout << i;
            first = false;
        }
    }
    cout << endl;
}

void lab4::problem3() {
    cout << "Uppercase ASCII characters:" << endl;
    int count = 0;
    for (char c = 'A'; c <= 'Z'; ++c) {
        cout << c << " ";
        count++;
        if (count % 5 == 0) {
            cout << endl;
        }
    }
    if (count % 5 != 0) {
        cout << endl;
    }
}

bool lab4::problem4(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int lab4::problem5(int n) {
    int reversedNum = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        reversedNum = reversedNum * 10 + digit;
        temp /= 10;
    }
    return reversedNum;
}

void lab4::problem6(int n) {
    long long sum = 0;
    cout << "Series sum for n=" << n << ":" << endl;
    for (int i = 1; i <= n; ++i) {
        long long term = static_cast<long long>(i) * i;
        cout << i << "*" << i << "=" << term << endl; // Example output format
        sum += term;
    }
    cout << "Total Sum: " << sum << endl;
}

int lab4::problem7(const vector<int>& numbers) {
    if (numbers.empty()) {
        cerr << "Error: No numbers provided to find maximum." << endl;
        return 0;
    }
    int maxVal = numbers[0]; // Initialize with the first element
    for (size_t i = 1; i < numbers.size(); ++i) {
        if (numbers[i] > maxVal) {
            maxVal = numbers[i];
        }
    }
    return maxVal;
}

void lab4::problem8(int size) {
    cout << "Square pattern of size " << size << ":" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "#";
        }
        cout << endl;
    }
}