#include<iostream>
using namespace std;
int main(){
    int baseScore, bonus, rounds, penalty, errors;
    double scoreA, scoreB;
    cout<<"Enter base score: ";
    cin>>baseScore;
    cout<<"Enter bonus: ";
    cin>>bonus;
    cout<<"Enter rounds: ";
    cin>>rounds;
    cout<<"Enter penalty: ";
    cin>>penalty;
    cout<<"Enter error: ";
    cin>>errors;

    scoreA = baseScore+bonus/rounds-penalty*errors; 
    scoreB = (baseScore+bonus)/rounds-penalty*errors;

    cout<<"Score A: \t"<<scoreA<<endl;
    cout<<"Score B: \t"<<scoreB<<endl;

    return 0;
}