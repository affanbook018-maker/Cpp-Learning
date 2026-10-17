#include<iostream>
using namespace std;
int main(){
    const int correctPIN = 2468;
    int enteredPIN=0, attempts=0;
    while(enteredPIN!=correctPIN && attempts<3){
        cout<<"Enter pin: ";
        cin>>enteredPIN;
        if(enteredPIN!=correctPIN){
            attempts++;
            cout<<"Attempts used: "<<attempts<<endl;
        
        }
    }if ( enteredPIN== correctPIN){
        cout<<"Access Granted";
    }else {
        cout<<"Terminal Locked";
    }return 0;
}