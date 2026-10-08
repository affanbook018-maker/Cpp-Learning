#include<iostream>
using namespace std;
int main(){
    double packageWeight, distanceKm;
    int batteryLevel(0-100), windSpeed;
    cout<<"Package Weight: ";
    cin>>packageWeight;
    cout<<"distance km: ";
    cin>>distanceKm;
    cout<<"Battery level(0-100): ";
    cin>>batteryLevel;
    cout<<"Wind Speed: ";
    cin>>windSpeed;
    if(windSpeed>0 && windSpeed<=15){
        cout<<"GREEN wind zone"<<endl;
    }else if (windSpeed>=30){
        cout<<"YELLOW wind zone"<<endl;
    }else {
        cout<<"RED wind zone"<<endl;
    }
    if(windSpeed<=30){
        if(batteryLevel>=60){
            if(packageWeight<=3.0 && distanceKm<=10.0){
                cout<<"Print Launch"<<endl;
            }else {
                cout<<"Manual review: load or route exceeds mission limit"<<endl;
            } 
        }else{
            cout<<"Recharge before mission"<<endl;
        }
    }else{
        cout<<"Mission postponed: Wind too strong"<<endl;
    }
    return 0;

}