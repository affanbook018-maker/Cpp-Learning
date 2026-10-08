#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "1. Password Reset" << endl;
    cout << "2. Wi-Fi Issue" << endl;
    cout << "3. LMS Issue" << endl;
    cout << "4. Lab Account" << endl;
    cout << "5. Exit" << endl;

    cout<<"What do you want to select?\nEnter a number: ";
    cin>>number;

    switch(number){
        case 1:
        cout<<"Password Reset";
        break;
        case 2:
        cout<<"Wi-Fi issue";
        break; 
        case 3:
        cout<<"LMS issue";
        break; 
        case 4:
        cout<<"Lab Account";
        break; 
        case 5:
        cout<<"Exit";
        break; 
        default:
        cout<<"Invalid option";
        break;

    }
return 0;
}