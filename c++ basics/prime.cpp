#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
// bool isPrime(int n){
//      if(n<=1){ 
//         cout<<"Invalid no.";
//         return false;
//     } 

//      for(int i=2; i<sqrt(n); i++){
//           if(n%i==0){
//                return false;
//         }
//      }
//         return true;
// }
bool isPrime(int n){
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
     
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main() {
    int n,k;
    cout<<"Enter no. of inputs: "<<endl;
    cin>>k;
    for(int i=0; i<k; i++){
        cout<<"Enter a number: "<<endl;
        cin>>n;
       if( isPrime(n)){
        cout<<"The number is prime."<<endl;
       }
       else{
           cout<<"The number is not prime."<<endl;
       }
    }
}