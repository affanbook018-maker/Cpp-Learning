#include<iostream>
using namespace std;
int main(){
    double temperature;
    cout<<"Enter your Tempeature: "<<endl;
    cin>>temperature;
    if (temperature >= 37.9){
    cout<<"Fever Alert";
    }
    else {
        cout<<"You are good";
    }
    return 0;
}