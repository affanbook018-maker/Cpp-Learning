#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if (marks>=90){
        cout<<"You got A";
    } else if (marks>=80){
        cout<<"You got B";
    } else if (marks >=70){
        cout<<"You got C";
    } else {cout<<"You are failed";}
    return 0;

}