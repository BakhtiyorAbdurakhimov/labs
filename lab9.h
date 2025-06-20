#ifndef LAB_06_20_H
#define LAB_06_20_H

#include <iostream>

class lab9 {
public:
    static int findSum(const int arr[], int size);
    static double findAverage(const int arr[], int size);
    static int findMin(const int arr[], int size);
    static void readArrayFromInput(int arr[], int& size);
    static int indexOfLargestElement(double array[], int size);
    bool strictlyEqual(const int list1[], const int list2[], int size); // Not static
};

#endif