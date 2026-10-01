#include <iostream>
#include<string>
using namespace std;
int main(){
    string weather;
    int temperature;
    cout<<"Enter Temperature: ";
    cin>>temperature;
    weather = (temperature>30)? "hot" : "cold";
    cout<<weather;
    return 0;
}