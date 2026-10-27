#include<iostream>
using namespace std;
double calculateArea(double length, double width);
double calculatePerimeter(double length, double width);
void displayResult(double area, double perimeter);
int main(){
    double length, width;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter width: ";
    cin>>width;
    double area = calculateArea(length, width);
    double perimeter = calculatePerimeter(length, width);
    displayResult(area, perimeter);
    return 0;
}
double calculateArea(double length, double width){
    return length*width;
}
double calculatePerimeter(double length, double width){
    return 2 * (length + width);
}
void displayResult(double area, double perimeter){
    cout<<"Total area is: "<<area<<endl;
    cout<<"Total perimeter is: "<<perimeter<<endl;
}