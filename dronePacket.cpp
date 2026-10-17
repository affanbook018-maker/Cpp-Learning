#include<iostream>
using namespace std;
int main(){
    int packetID, store;
    cout<<"Enter Packet ID: ";
    cin>>packetID;
    if(packetID>0){
        cout<<"Value is fine";
    }else{
        cout<<"Please enter a positive value";
        return 0;
    } store = packetID;
    int reverseID=0, digitSum=0, digitCount=0;
    while(packetID>0){
        int lastDigit=packetID%10;
        packetID/=10;
        digitSum += lastDigit;
        digitCount++;
        reverseID = reverseID * 10 + lastDigit;
    }
cout << "Original Packet ID: " << store << endl;
cout << "Reversed Packet ID: " << reverseID << endl;
cout << "Number of digits: " << digitCount << endl;
cout << "Checksum: " << digitSum << endl;
if (store == reverseID) {
    cout << "Mirror packet ID" << endl;
}
else {
    cout << "Normal packet ID" << endl;
}
return 0;
}