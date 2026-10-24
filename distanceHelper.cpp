#include<iostream>
#include<cmath>
using namespace std;
double calculateDistance(double x1, double y1, double x2, double y2);
void printTravelAdvice(double distance);
int main() {
    double x1, x2, y1, y2;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;
    double distance = calculateDistance(x1, y1, x2, y2);
    cout << "Distance = " << distance << endl;
    printTravelAdvice(distance);
    return 0;
}

double calculateDistance(double x1, double x2, double y1, double y2){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
void printTravelAdvice(double distance){
    if(distance<=1){
        cout<<"You can Walk"<<endl;
    }else if(distance<=5){
        cout<<"Use Campus Shutter"<<endl;
    }else {
        cout<<"Use Transport"<<endl;
    }
}