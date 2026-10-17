#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
  for(int i =1; i<=10; i++){
    cout<<"Enter number: ";
  cin>>n;
  if(n<0){
    continue;
  }if(n==0){
    break;
  } sum = sum + n;
  }cout<<sum;
  return 0;
}
