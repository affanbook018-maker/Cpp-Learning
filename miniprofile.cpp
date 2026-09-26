#include <iostream>
#include <string>
using namespace std;
int main(){
    int semester;
    char section;
    string name;
    double cgpa;

    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter section: ";
    cin>>section;
    cout<<"Enter semester: ";
    cin>>semester;
    cout<<"Enter CGPA: ";
    cin>>cgpa;

    cout<<"Your name is \t    "<<name<<endl;
    cout<<"Your semester is\t"<<semester<<endl;
    cout<<"Your section is\t "<<section<<endl;
    cout<<"Your CGPA is\t    "<<cgpa<<endl;
    return 0;
}