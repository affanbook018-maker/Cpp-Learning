#include <iostream>
using namespace std;

int main() {
    int code, originalCode;
    int divisor = 1;
    int digit, digitCount = 0;
    cout << "Enter positive code: ";
    cin >> code;
    if (code <= 0) {
        cout << "Invalid code" << endl;
        return 0;
    }
    originalCode = code;

    while (code / divisor >= 10) {
        divisor = divisor * 10;
    }
    cout << "Code in words: ";
    while (divisor > 0) {
        digit = (code / divisor) % 10;

        switch (digit) {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
        digitCount++;
        divisor = divisor / 10;
    }
    cout << endl;
    cout << "Original Code: " << originalCode << endl;
    cout << "Total digits: " << digitCount << endl;
    return 0;
}