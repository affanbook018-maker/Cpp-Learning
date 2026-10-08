
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    unsigned int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "a: " << a << " " << bitset<8>(a) << endl;
    cout << "b: " << b << " " << bitset<8>(b) << endl;

    cout << "AND: " << (a & b) << " "
         << bitset<8>(a & b) << endl;

    cout << "OR: " << (a | b) << " "
         << bitset<8>(a | b) << endl;

    cout << "XOR: " << (a ^ b) << " "
         << bitset<8>(a ^ b) << endl;

    cout << "Left shift: " << (a << 1) << " "
         << bitset<8>(a << 1) << endl;

    cout << "Right shift: " << (b >> 1) << " "
         << bitset<8>(b >> 1);

    return 0;
}
