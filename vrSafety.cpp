#include<iostream>
using namespace std;
int main(){
    int headsetBattery;
    bool controllerConnected;
    bool playAreaClear;
    cout<<"Enter headset battery: ";
    cin>>headsetBattery;
    cout<<"Is controller connected?(1 for true and 0 for false):\n";
    cin>>controllerConnected;
    cout<<"Is play area clear?(1 for true and 0 for false):\n";
    cin>>playAreaClear;
    if(headsetBattery<20){
        cout<<"Battery warning: Charge soon\n";
    }if(headsetBattery>=20 && controllerConnected && playAreaClear){
        cout<<"VR session can start";
    }else{
        cout<<"VR session blocked";
    }if(!controllerConnected){
        cout<<"Controller is not connected";
    }if(!playAreaClear){
        cout<<"Play area is not clear";
    }return 0;
}