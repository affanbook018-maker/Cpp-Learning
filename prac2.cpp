#include<iostream>
using namespace std;
double calculateFinal(int quiz, int mid, int finalExam);
char calculateGrade(double finalMarks);
void printReport(double finalMarks, char grade);
int main(){
    int x,y,z;
    double finalMarks;
    char grade;
    cout<<"Quiz: ";
    cin>>x;
    cout<<"MIds: ";
    cin>>y;
    cout<<"Finals: ";
    cin>>z;
    finalMarks = calculateFinal(x,y,z);
    grade = calculateGrade(finalMarks);
    printReport(finalMarks, grade);
}
double calculateFinal(int quiz, int mid, int finalExam){
    return (quiz*0.20 + mid*0.30 + finalExam*0.50);
}
char calculateGrade(double finalMarks){
    if (finalMarks>=90){
        return 'A';
    }else if(finalMarks>=80){
        return 'B';
    }else if(finalMarks>=70){
        return 'C';
    }else if(finalMarks>=60){
        return 'D';
    }else {
        return 'F';
    }
}
void printReport(double finalMarks, char grade){
    cout<<"Final Marks: "<<finalMarks<<endl;
    cout<<"Grade: "<<grade<<endl;
    if(finalMarks>=60){
        cout<<"Pass";
    }else{
        cout<<"Fail";
    }
}