#include <iostream>
using namespace std;
int main(){
    double a, b, c, d, r, result, resultWithParentheses;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    cout<<"Enter d: ";
    cin>>d;
    cout<<"Enter r: ";
    cin>>r;
    result = 4.0 / (3.0 * (r + 34.0))
       - 9.0 * (a + b * c)
       + (3.0 + d * (2.0 + a)) / (a + b * d);
    resultWithParentheses = (4.0 / (3.0 * (r + 34.0)))
       -( 9.0 * (a + b * c))
       +( (3.0 + d * (2.0 + a)) / (a + b * d));
    cout<<"Result: "<<result<<endl;
    cout<<"Result With Parentheses: "<<resultWithParentheses<<endl;
    return 0;

    
}