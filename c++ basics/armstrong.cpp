#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

bool isArmstrong(int n){
     if(n<0){
        cout<<"The number is negative , invalid input."<<endl;
         return false;
     }
     int org=n;
     
     int digits=0, temp=n;
     if(temp==0) digits=1;
     while(temp>0){
        digits++;
        temp/=10;
     }
      
     int power[10];
     for(int i=0; i<=9; i++){
        power[i]=1;
        for(int j=1; j<=digits; j++){
            power[i]*=i;
        }
     }

     int sum=0;
     temp=n;
     while(temp>0){
        int rem=temp%10;
        sum+=power[rem];
        temp/=10;
     }
     return sum==org;
}
int main() {
    int n,k;
    cout<<"Enter no. of inputs: "<<endl;
    cin>>k;
    for(int i=0; i<k; i++){
        cout<<"Enter a number: "<<endl;
        cin>>n;
        if(isArmstrong(n)==false) {
            cout<<"The no. is not armstrong."<<endl;
        }
        else{
            cout<<"The no. is armstrong."<<endl;
        }
    }
}