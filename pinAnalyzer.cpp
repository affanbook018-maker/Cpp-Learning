#include<iostream>
using namespace std;
int countDigits(int pin);
int digitSum(int pin);
bool isStrongPin(int pin);
int main(){
    int pin, count, sum;
    cout<<"Enter PIN: ";
    cin>>pin;
    count=countDigits(pin);
    sum=digitSum(pin);
    cout<<"Total Digits: "<<count<<endl;
    cout<<"Sum of digits: "<<sum<<endl;
    bool strong=isStrongPin(pin);
    if(strong==true){
        cout<<"Strong Strength"<<endl;
    }else {
        cout<<"Weak Strength"<<endl;
    }
}
int countDigits(int pin){
    int count=0;
    while(pin>0){
        count++;
        pin=pin/10;
    }return count;
}
int digitSum(int pin){
    int sum=0;
    while(pin>0){
        int digit = pin%10;
        sum = sum + digit;
        pin= pin/10;
    }return sum;
}
bool isStrongPin(int pin){
    if (countDigits(pin) == 4 && digitSum(pin)>=20 && pin % 2 != 0){
       return true;
    }else{
        return false;
    }
    
}