#include<iostream>
using namespace std;
int main(){
    bool isPassed = true;
    int percentage = 80;
    cout<<"Enter Your percentage: ";
    cin>>percentage;
    if (isPassed){
        if (percentage >= 80){
            cout<<"You are admitted to Computer Science.";
        } else {cout<<"Admitted to Data Science";}
    } else {cout<<"Better luck next time";}
    return 0;
}