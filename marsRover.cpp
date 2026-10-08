#include<iostream>
using namespace std;
int main(){
    int command, batteryLevel;
    cout<<"Enter command: ";
    cin>>command;
    cout<<"Enter battery level(0-100): ";
    cin>>batteryLevel;
    cout<<"Power status: "
        <<(batteryLevel>=50 ? "POWER OK" : "LOW POWER")
        <<endl;
    switch (command){
        case 1:
        cout<<"Capture Panorama";
        break;
        case 2: 
        cout<<"Collect rock sample";
        break;
        case 3:
        cout<<"Transmit data";
        break;
        case 4: 
        cout<<"Return to base";
        default:
        cout<<"Invalid command";
    }
    return 0;
   
}