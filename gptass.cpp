#include<iostream>
using namespace std;
double calculateCharges(int units);
double calculateServiceFee(int connectionType);
void applyDiscount(double& total, char choice);
void printBill(double charges, double serviceFee, double total);
int main(){

}
double calculateCharges(int units){
    double cost, total;
    if(0-100 units){
        cout<<"RS 10"<<cost==10;
    }else if(101-200 units){
        cout<<"RS 15"<<cost==15;
    }else {
        cout<<"RS 20"<<cost==20;
    }
    total = units*cost;
    return total;
}
double calculateServiceFee(int connectionType){
    double serviceFee;
    cout<<"Connection type: ";
    cin>>connectionType;
    switch(connectionType){
        case 1:
        cout<<"Residential, service fee is RS 100"<<serviceFee=100;
        break;
        case 2:
        cout<<"Commercial, service fee is RS 300"<<serviceFee=300;
        break;
}  return serviceFee;
}