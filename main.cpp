#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <unordered_map>
using namespace std;

int powerOfNum(int base, int exp) {
    if (exp == 0) return 1;

    return base * powerOfNum(base, exp - 1);
}

int series(int n) {
    if (n == 0) return 0;

    return 1/n + series(n-1);
}











int multiplyTwo(int num1, int num2) {
    if (num2 == 0) {
        return 0;
    }
    if (num2 > 0) {
        return num1 + multiplyTwo(num1, num2-1);
    }
    return -num1 + multiplyTwo(num1, num2+1);
}

template<typename T>
void compareValues(T a, T b) {
    if (a > b) {
        cout << "Larger value: " << a << endl;
    } else if (b > a) {
        cout << "Larger value: " << b << endl;
    } else {
        cout << "Values are equal" << endl;
    }
}

template<typename T>
T middle(T a, T b, T c) {
    if ((a > b && a < c) || (a < b && a > c)) return a;
    if ((b > a && b < c) || (b < a && b > c)) return b;
    return c;
}

template<typename T>
double average(T a, T b) {
    return static_cast<double>(a + b) / 2;
}

string toLower(const string& str) {
    string lowerStr = str;
    for (char& ch : lowerStr) {
        ch = tolower(ch);
    }
    return lowerStr;
}


int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    return reversed;
}

string digitToWord(int num) {
    if (num == 0) return "Zero";

    vector<string> words = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    int rev = reverseNumber(num);
    string result = "";

    while (rev != 0) {
        int digit = rev % 10;
        rev /= 10;
        result += words[digit] + " ";
    }

    return result;
}

int wordTodigit(string sentence) {
    unordered_map<string, int> digits = {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9}
    };
    string word;
    stringstream ss(sentence);
    int result = 0;
    while (ss >> word) {
        word = toLower(word);
        if (digits.contains(word)) {
            result = result * 10 + digits[word];
        } else {
            cout << "Unknown word: " << word << endl;
        }
    }

    return reverseNumber(result);
}



int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num = num / 10;
        count++;
    }
    return count;
}

int octal2Dec(const int& octalNumber) {
    int decimalValue = 0;
    int base = 1;

    int temp = octalNumber;
    while (temp > 0) {
        int lastDigit = temp % 10;
        if (lastDigit >= 8) {
            cout << "Invalid octal digit: " << lastDigit << endl;
            return -1;
        }
        decimalValue += lastDigit * base;
        base *= 8;
        temp /= 10;
    }

    return decimalValue;
}



int main() {
    // cout << powerOfNum(10,2) << endl;

    cout<<series(3)<<endl;

    // int num1, num2;
    // cin >> num1 >> num2;
    // cout << multiplyTwo(num1, num2);

    // num1 = 10;
    //
    // cout<<reverseNumber(num1);

    // cout<<digitToWord(1243)<<endl;
    // cout<<wordTodigit("One Two Three");

    // int octalInput;
    // cout << "Enter an octal number (digits 0-7): ";
    // cin >> octalInput;
    //
    // int decimal = octal2Dec(octalInput);
    // cout << "The decimal number is: " << decimal << endl;
}
