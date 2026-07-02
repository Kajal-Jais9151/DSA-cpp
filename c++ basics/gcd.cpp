#include<iostream>
using namespace std;
void gcd(int a, int b){
    int gcd=0;
    while(a!=0 && b!=0 && a!=b){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0){
       gcd=b;
       cout<<"gcd= "<<b<<endl;
    }
    else{
        gcd=a;
         cout<<"gcd= "<<a<<endl;
    }
}
int main(){
     int a,b,t;
    cout<<"Enter a number for no. of inputs: "<<endl;
       cin>>t;
    for(int i=1; i<=t; i++){
       cout<<"Enter first number : "<<endl;
       cin>>a;
       cout<<"Enter second number : "<<endl;
       cin>>b;
       gcd(a,b);
    }
} 