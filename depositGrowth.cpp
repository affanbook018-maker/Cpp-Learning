#include<iostream>
using namespace std;
int main(){
    double principalAmount, annualRate, totalInterest;
    int years;
    double currentBalance;
    cout<<"Enter principal amount: ";
    cin>>principalAmount;
    cout<<"Enter annual rate: ";
    cin>>annualRate;
    cout<<"Enter years: ";
    cin>>years;
    if(principalAmount>0 && annualRate>0 && years>0){
        cout<<"All values are positive"<<endl;
    }else{
        cout<<"Please enter positive values"<<endl;
        return 0;
    }
    currentBalance = principalAmount;
    for(int i=1; i<=years; i++){
        currentBalance+=currentBalance*(annualRate/100.0);
        cout<<"Years: "<<i<<endl;
        cout<<"Current Balance: "<<currentBalance<<endl;
    }
    totalInterest = currentBalance - principalAmount;
    cout<<"Total interest: "<<totalInterest<<endl;
    return 0;

}