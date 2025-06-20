#include "lab9.h"
#include <iostream>
#include <limits>

using namespace std;

int lab9::findSum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

double lab9::findAverage(const int arr[], int size) {
    if (size == 0) return 0.0;
    return static_cast<double>(findSum(arr, size)) / size;
}

int lab9::findMin(const int arr[], int size) {
    if (size == 0) return 0; // Or throw an exception, depending on requirements
    int minVal = numeric_limits<int>::max();
    for (int i = 0; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

void lab9::readArrayFromInput(int arr[], int& size) {
    cout << "Enter size of array: ";
    cin >> size;
    if (size < 0) {
        size = 0;
        cout << "Invalid size. Setting size to 0." << endl;
        return;
    }
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}

int lab9::indexOfLargestElement(double array[], int size) {
    if (size <= 0) return -1; // Handle empty or invalid size array

    double maxVal = array[0];
    int maxIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (array[i] >= maxVal) { // Use >= to get the last occurrence if duplicates exist
            maxVal = array[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

bool lab9::strictlyEqual(const int list1[], const int list2[], int size) {
    for (int i = 0; i < size; ++i) {
        if (list1[i] != list2[i]) {
            return false;
        }
    }
    return true;
}