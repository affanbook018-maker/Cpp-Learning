#include <iostream>
using namespace std;

int multiply(int a, int b)      // definition
{
    return a * b;
}     

void printLine();             // prototype
int main()
{
    int answer = multiply(6, 7); // function call
    printLine();     //function call
    cout << "Answer = " << answer << endl;
    printLine();     // functoin call
    return 0;
}


void printLine(){               // definition
    cout<<"--------------------"<<endl;
}