#include<iostream>
using namespace std;
int main(){
    bool hasID = true;
    bool registration = false;
    cout << (hasID && registration) <<endl;
    cout << (hasID || registration) << endl;
    cout << (!hasID) << endl;
    return 0;
}