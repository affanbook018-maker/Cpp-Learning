
#include <iostream>
using namespace std;

int main() {
    int n, battery, critical = 0;
    double total = 0, average;

    cout << "Enter number of readings: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter reading: ";
        cin >> battery;

        total = total + battery;

        if (battery < 20) {
            critical++;
        }
    }

    average = total / n;

    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Critical readings: " << critical << endl;

    return 0;
}
