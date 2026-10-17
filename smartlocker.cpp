#include <iostream>
using namespace std;

int main() {
    bool occupied = false;
    int choice;
    do {
        cout << "1. Store parcel" << endl;
        cout << "2. Collect parcel" << endl;
        cout << "3. Check status" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            if (occupied == false) {
                occupied = true;
                cout << "Parcel stored" << endl;
            }
            else {
                cout << "Locker already occupied" << endl;
            }
            break;
        case 2:
            if (occupied == true) {
                occupied = false;
                cout << "Parcel collected" << endl;
            }
            else {
                cout << "Locker is empty" << endl;
            }
            break;
        case 3:
            if (occupied == true) {
                cout << "Locker is occupied" << endl;
            }
            else {
                cout << "Locker is empty" << endl;
            }
            break;
        case 0:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 0);
    return 0;
}