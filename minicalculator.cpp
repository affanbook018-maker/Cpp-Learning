#include <iostream>
using namespace std;
int main(){
    double x, y, sum, difference, product;
    cout<<"Enter First Number: ";
    cin>>x;
    cout<<"Enter Second Number: ";
    cin>>y;

    sum = x + y;
    difference = x - y;
    product = x * y;

    cout<<"Your sum is\t"<<sum<<endl;
    cout<<"Your difference is\t"<<difference<<endl;
    cout<<"Your product is\t"<<product<<endl;
    return 0;
}