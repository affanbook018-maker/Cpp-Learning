
#include <iostream>
using namespace std;

int main() {
    const int correctPIN = 2468;
    int pin = 0, attempts = 0;

    while (attempts < 3 && pin != correctPIN) {
        cout << "Enter PIN: ";
        cin >> pin;
        attempts++;

        if (pin != correctPIN) {
            cout << "Attempts used: " << attempts << endl;
        }
    }

    if (pin == correctPIN) {
        cout << "Login Successful";
    }
    else {
        cout << "Terminal Locked";
    }

    return 0;
}
