
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input";
    }
    else {
        for (int i = n; i >= 1; i--) {
            if (n % i == 0) {
                cout << i << endl;
            }
        }
    }

    return 0;
}
