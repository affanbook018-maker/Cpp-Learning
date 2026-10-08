#include<iostream>
#include<string>
using namespace std;
int main(){
    double CGPA;
    int attendancePercent;
    string result;

    cout<<"Enter your CGPA: ";
    cin>>CGPA;
    cout<<"Enter your attendance percent: ";
    cin>>attendancePercent;

    result =(CGPA>=3.50 && attendancePercent>=80)? 
    "SHORTLISTED" : "NOT SHORTLISTED";
    cout<<result<<endl;
    return 0;
}