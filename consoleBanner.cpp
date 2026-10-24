#include<iostream>
using namespace std;
void printDivider();  // prototype
int main(){
    printDivider(); // function call
    cout<<"CS110 FUNCTION PRACTICE"<<endl;
    printDivider();
    cout<<"Prototype -> Call -> Definition"<<endl;
    printDivider();
    return 0;
}
void printDivider(){       // function definition
    for(int i=1; i<=30; i++){
        cout<<"-";
    }cout<<endl;
}