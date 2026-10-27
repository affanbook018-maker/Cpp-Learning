#include<iostream>
using namespace std;
void addBonusByValue(int score)
{
    score = score + 5;
    cout << "Inside value function: " << score << endl;
}

void addBonusByReference(int &score)
{
    score = score + 5;
    cout << "Inside reference function: " << score << endl;
}
int main(){
    int score = 70;
    cout<<"Original Score: "<<score<<endl;
    addBonusByValue(score);
    cout<<"Score now is: "<<score<<endl;
    score = 70;
    addBonusByReference(score);
    cout<<"Score now is: "<<score<<endl;
    return 0;
}