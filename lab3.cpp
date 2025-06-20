#include "lab3.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void lab3::trafficLightCommand() {
    char light;
    cin >> light;
    switch (light) {
        case 'g': cout << "Go!" << endl; break;
        case 'y': cout << "Get ready!" << endl; break;
        case 'r': cout << "Stop" << endl; break;
        default: cout << "Invalid input" << endl;
    }
}

void lab3::gradeToScale() {
    int grade;
    cin >> grade;
    switch (grade / 10) {
        case 10:
        case 9: cout << "A" << endl; break;
        case 8: cout << "B" << endl; break;
        case 7: cout << "C" << endl; break;
        case 6: cout << "D" << endl; break;
        default: cout << "F" << endl;
    }
}

void lab3::shippingCost() {
    double w;
    cin >> w;
    if (w <= 0)
        cout << "Invalid input." << endl;
    else if (w > 20)
        cout << "The package cannot be shipped." << endl;
    else if (w <= 2)
        cout << "3500" << endl;
    else if (w <= 3)
        cout << "5500" << endl;
    else if (w <= 5)
        cout << "8500" << endl;
    else if (w <= 8)
        cout << "10500" << endl;
    else
        cout << "Shipping cost not defined in this range." << endl;
}

void lab3::digitToWord() {
    int d;
    cin >> d;
    switch (d) {
        case 0: cout << "Zero" << endl; break;
        case 1: cout << "One" << endl; break;
        case 2: cout << "Two" << endl; break;
        case 3: cout << "Three" << endl; break;
        case 4: cout << "Four" << endl; break;
        case 5: cout << "Five" << endl; break;
        case 6: cout << "Six" << endl; break;
        case 7: cout << "Seven" << endl; break;
        case 8: cout << "Eight" << endl; break;
        case 9: cout << "Nine" << endl; break;
        default: cout << "It is not a digit" << endl;
    }
}

void lab3::evenOrOddGame() {
    srand(time(0));
    int num = rand() % 100;
    string guess;
    cin >> guess;
    bool isEven = (num % 2 == 0);
    bool correct = (guess == "even" && isEven) || (guess == "odd" && !isEven);
    cout << "Generated: " << num << " -> " << (isEven ? "even" : "odd") << endl;
    cout << (correct ? "Correct" : "Incorrect") << endl;
}

void lab3::pickACard() {
    srand(time(0));
    int rank = rand() % 13 + 1;
    int suit = rand() % 4;

    string rankStr, suitStr;
    switch (rank) {
        case 1: rankStr = "Ace"; break;
        case 11: rankStr = "Jack"; break;
        case 12: rankStr = "Queen"; break;
        case 13: rankStr = "King"; break;
        default: rankStr = to_string(rank);
    }

    switch (suit) {
        case 0: suitStr = "Clubs"; break;
        case 1: suitStr = "Diamonds"; break;
        case 2: suitStr = "Hearts"; break;
        case 3: suitStr = "Spades"; break;
    }

    cout << rankStr << " of " << suitStr << endl;
}
