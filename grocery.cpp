#include<iostream>
using namespace std;
int main(){
    double price = 12.99;
    int number;
    double total;
    cout<<"The pizza costs $"<<price<<endl;
    cout<<"How many pizzas did u buy?"<<endl;
    cin>>number;
    total = price * number;
    cout<<"Your total will be "<<total<<endl;
    return 0;
}