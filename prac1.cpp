#include<iostream>
using namespace std;
double average3(int a, int b, int c);
char gradeFromAverage(double avg);
int main(){
    int x,y,z;
    double avg;
    cout<<"marks 1: ";
    cin>>x;
    cout<<"marks 2: ";
    cin>>y;
    cout<<"marks 3: ";
    cin>>z;
    avg = average3(x, y, z);
    cout<<"Average: "<<avg<<endl;
    cout<<"Grade: "<<gradeFromAverage(avg)<<endl;
    return 0;

}
double average3(int a, int b, int c){
    return (a+b+c)/3.0;
}
char gradeFromAverage(double avg){
    if (avg>=90){
        return 'A';
    }else if (avg>=80 && avg<90){
        return 'B';
    }else if(avg>=70 && avg <80){
        return 'C';
    }else if (avg>=60 && avg <70){
        return 'D';
    }else {
        return 'F';
    }
}