//
// Created by user on 6/23/2025.
//

#ifndef LAB10_H
#define LAB10_H
#include <string>

using namespace std;
const int SIZE=4;

class lab10 {
public:
    static double sumMajorDiagonal(const double m[][SIZE]);

    static int find_element(int array[], int size, int target);

    static void bubbleSort(int array[], int size);

    static double sumColumn(const double m[][SIZE], int rowSize, int columnIndex);

    static int count(const string& s, char a);
};



#endif //LAB10_H
