#include<iostream>
using namespace std;
double calculateAverage(double m1, double m2, double m3){   
    return (m1+m2+m3)/3.0;     //this function calculates average of three marks
}
char determineGrade(double average){   //this function finds grade from average
    if(average>=80){
        return 'A';
    }else if (average>=70){
        return 'B';
    }else if (average>=60){
        return 'C';
    }else if (average>=50){
        return 'D';
    }else {
        return 'F';
    }
}
bool isPassing(double average){   // this function checks whether the student failed or passed
    if ( average >= 50){
        return true;
    }else{
        return false;
    }
}
void displayReport(double average, char grade, bool passed){  //this function displays the student's result
    cout<<"Your average is: "<<average<<endl;
    cout<<"Your grade is: "<<grade<<endl;
    if(passed==true){
        cout<<"You have passed"<<endl;
    }else{
        cout<<"You have failed"<<endl;
    }
}
int main(){
    double average;
    char grade;
    bool passed;
    int m1, m2, m3;
    cout<<"Enter first marks: ";
    cin>>m1;
    cout<<"Enter second marks: ";
    cin>>m2;
    cout<<"Enter third marks: ";
    cin>>m3;
    average = calculateAverage(m1, m2, m3);
    grade = determineGrade(average);
    passed = isPassing(average);
    cout<<"Your Report is: ";
    displayReport(average, grade, passed);
    return 0;
}
