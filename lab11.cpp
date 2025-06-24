//
// Created by user on 6/24/2025.
//

#include "lab11.h"

#include <ctime>
#include <iostream>
using namespace std;

void lab11::problem1() {
    int array[10] = {12, 45, 67, 89, 23, 56, 78, 34, 90, 11};
    int *ptrA = array;
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        *(ptrA + i) = rand() % 100;
    }

    for (int i = 0; i < 10; i++) {
        cout << "Address: " << (ptrA + i)
        << " | Value: " << *(ptrA + i) << endl;
    }
}

void lab11::problem2() {
    const int SIZE = 10;
    float *ptr, arr[SIZE];

    ptr = arr;

    cout << "Enter Midterm grades for 10 students:" << endl;
    for (int i = 0; i < SIZE; i++) {
        float grade;
        cin >> grade;

        *(ptr + i) = grade * 0.3f;
    }

    cout << "\nMidterm contribution to overall grade (in reverse order):" << endl;
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << *(ptr + i) << " ";
    }

    cout << endl;
}

int lab11::problem3(const int* a, int size) {
    int count = 0;
    const int* ptr = a;

    for (int i = 0; i < size; i++) {
        if (*ptr % 2 == 0) {
            count++;
        }
        ptr++;
    }

    return count;
}

bool lab11::problem4(const int* a, const int* b, int size) {
    const int* ptrA = a;
    const int* ptrB = b + size - 1;

    for (int i = 0; i < size; i++) {
        if (*ptrA != *ptrB) {
            return false;
        }
        ptrA++;
        ptrB--;
    }

    return true;
}

void lab11::problem5(const double* arr1, const double* arr2, double* sum, int size) {
    for (int i = 0; i < size; i++) {
        *(sum + i) = *(arr1 + i) + *(arr2 + i);
    }
}


