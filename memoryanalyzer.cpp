#include<iostream>
using namespace std;
int main(){
    int accountNumber;
    float transactionAmount;
    char accountStatus;
    bool isActive;
    cout <<"Size of int: "<<sizeof(accountNumber)<<"bytes"<<endl;
    cout<<"Size of float: "<<sizeof(transactionAmount)<<"bytes"<<endl;
    cout<<"Size of char: "<<sizeof(accountStatus)<<"bytes"<<endl;
    cout<<"Size of bool: "<<sizeof(isActive)<<"bytes"<<endl;
    int bytesPerAccount = sizeof(accountNumber) + sizeof(transactionAmount) + sizeof(accountStatus)
    + sizeof(isActive);
    cout<<"Memory for account: "<<bytesPerAccount <<"bytes"<<endl;
    int totalBytes = bytesPerAccount * 10000;
    double totalKB = totalBytes/1024.0;
    double totalMB = totalKB/1024.0;
    cout<<"Total Memory in bytes: "<<totalBytes<<endl;
    cout<<"Total Memory in KB: "<<totalKB<<endl;
    cout<<"Total Memory in MB: "<<totalMB<<endl;
    return 0;
    
}