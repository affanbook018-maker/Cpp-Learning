#include <iostream>
using namespace std;
int countEvenDigits(int id);
int digitsum(int id);
bool isValidID(int id);

int main(){
    int id, sum1, even;
    cout<<"Enter ID: ";
    cin>>id;
    sum1 = digitsum(id);
    even = countEvenDigits(id);
    cout<<"Sum of digits: "<<sum1<<endl;
    cout<<"Total even digits: "<<even<<endl;
    if(isValidID(id)==true){
        cout<<"Valid Student ID";
    }else {
        cout<<"Invalid Student ID";
    }return 0;
}
int countEvenDigits(int id){
    int evendigit=0;
    while(id > 0){
        int digit = id%10;
        if(digit % 2 == 0){
            evendigit++;
        } id/=10;
    }return evendigit;
}
int digitsum(int id){
    int sum=0;
    while(id>0){
        int digit=id%10;
        sum+=digit;
        id/=10;
    }return sum;
}
bool isValidID(int id){
    return (id>=1000 && id<=9999 && countEvenDigits(id)>=2 && digitsum(id)>=20);

}