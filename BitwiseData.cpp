#include<iostream>
#include<bitset>
using namespace std;
int main(){
    unsigned int a, b;
    cout<<"Enter first 8-bit integer (0-255): "<<endl;
    cin>>a;
    cout<<"Enter second 8-bit integer (0-255): "<<endl;
    cin>>b;
    cout<<"A : "<< a <<"\t"<<"Binary: "<<bitset<8>(a)<<endl;
    cout<<"B : "<< b <<"\t"<<"Binary: "<<bitset<8>(b)<<endl;
    unsigned int andResult = a & b;
    cout<< "a & b\t" << "Decimal: " << andResult << "\t"<< "Binary: " << bitset<8>(andResult) <<endl;
    unsigned int orResult = a | b;
    cout<< "a | b\t" << "Decimal: " << orResult  <<"\t"<< "Binary: " << bitset<8>(orResult) <<endl;
    unsigned int xorResult = a ^ b;
    cout<< "a ^ b\t" << "Decimal: " << xorResult <<"\t" << "Binary: " << bitset<8>(xorResult) <<endl;
    unsigned int leftShiftResult = a << 2;
    cout << "a << 2\t" << " Decimal: " << leftShiftResult <<"\t" << " Binary: "
    << bitset<8>(leftShiftResult)<< endl;
    unsigned int rightShiftResult = b >> 3;
    cout << "b >> 3" << " Decimal: " << rightShiftResult << " Binary: "
    << bitset<8>(rightShiftResult) << endl;
    return 0;
}