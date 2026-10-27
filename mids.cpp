#include <iostream>
using namespace std;
int digitSum(int n);
bool isSpecial(int n);
int main(){
    int sum, divisible, n;
    bool check;
    cout<<"Enter a number";
    cin>>n;
    sum = digitSum(n);
    check = isSpecial(n);
    return 0;
}
int digitSum(int n){
    int sum=0, digit;
    while(n>0){
        digit = n%10;
        sum+=digit;
        n/=10;
    }return sum;
}
bool isSpecial(int n){
    int digit, divisible=0;
    while(n>0){
        digit = n%10;
        if(digit % 3 ==0){
            divisible++;
        } n/=10;
    }return (digitSum(n)%2==0 && divisible>=1);
}