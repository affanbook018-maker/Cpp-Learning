
#include <iostream>
using namespace std;

int main() {
    int number, original, digit;
    int count = 0, sum = 0, ones = 0;

    cout << "Enter number: ";
    cin >> number;

    original = number;

    while (number > 0) {
        digit = number % 10;
        count++;
        sum = sum + digit;

        if (digit == 1) {
            ones++;
        }

        number = number / 10;
    }

    cout << "Original number: " << original << endl;
    cout << "Total digits: " << count << endl;
    cout << "Sum: " << sum << endl;
    cout << "Number of ones: " << ones;

    return 0;
}
