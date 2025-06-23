#include "lab10.h"

#include <string>

double lab10::sumMajorDiagonal(const double m[][SIZE]) {
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += m[i][i];
    }
    return sum;
}

int lab10::find_element(int array[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;
        }
    }
    return -1;
}

void lab10::bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

double lab10::sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0;
    for (int i = 0; i < rowSize; i++) {
        sum += m[i][columnIndex];
    }
    return sum;
}

int lab10::count(const string& s, char a) {
    int total = 0;
    for (char ch : s) {
        if (ch == a) {
            total++;
        }
    }
    return total;
}


