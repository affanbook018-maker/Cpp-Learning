#include<iostream>
using namespace std;
int main(){
    int limits;
    bool isPrime;
    int primeCount=0, primeSum=0;
    cout<<"Enter integer limit: ";
    cin>>limits;
    if(limits<2 || limits>100){
        cout<<"Invalid limit";
        return 0;
    }
    for(int num=2; num<=limits; num++){
        bool isPrime = true;
        for (int divisor = 2; divisor < num; divisor++) {
        if (num % divisor == 0) {
    isPrime = false;
    break;
}
}
     if (isPrime == true) {
        cout << num << " ";
        primeCount++;
        primeSum += num;
    }
}
cout << "Total Prime Channels: " << primeCount << endl;
cout << "Sum of Prime Channels: " << primeSum << endl;
}