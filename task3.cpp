#include<iostream>
#include<cmath>
using namespace std;

double distanceFromOrigin(double x, double y);
double squareValue(double n); 

int main(){
    double x, y, distance, n, square;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter y: ";
    cin>>y;
    distance = distanceFromOrigin(x, y);
    cout<<"Total Distance is: "<<distance<<endl;
    cout<<"Enter n: ";
    cin>>n;
    square = squareValue(n);
    cout<<"Its square will be: "<<square;
    return 0;
}
double distanceFromOrigin(double x, double y){
    return sqrt( pow(x, 2) + pow(y,2));
}
double squareValue(double n){
    return pow(n, 2);
}