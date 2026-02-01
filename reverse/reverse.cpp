// reverse a number in c++ using loop
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number: ";
    cin>>n;
    if(n==0){
        cout<<"please enter number greater than zero";
        return 0;
    }
    if(n<0){
        n = -1*n;
    }
    int d =0;
    int reverse=0;
    int c= n;
    while(n!=0){
        d = n%10;
        n/=10;
        reverse = reverse*10+d;
    }
    cout<<"orignal number is "<<c<<" and reverse is "<<reverse;
    return 0;
}