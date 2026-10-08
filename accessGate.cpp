#include<iostream>
using namespace std;
int main(){
    bool hasID, feeCleared, inductionComplete, accessGranted;
    int attendancePercent;

    cout<<"Enter hasID(1/0): ";
    cin>>hasID;
    cout<<"Enter fee cleared(1/0): ";
    cin>>feeCleared;
    cout<< "Enter induction complete(1/0)";
    cin>>inductionComplete;
    cout<<"Enter attendance percent: ";
    cin>>attendancePercent;

    if(attendancePercent>=75){
        if(hasID==1 && feeCleared==1 && inductionComplete==1){
            cout<<"Access granted";
            accessGranted=1;
            
        } else {
            cout<<"Access Denied";
            accessGranted=0;
        }
    
}else{
    cout<<"Access Denied";
    accessGranted=0;
}cout<<"Numeric value of Access Granted: "<<accessGranted<<endl;
return 0;
}