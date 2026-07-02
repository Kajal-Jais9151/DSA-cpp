#include<iostream>
using namespace std;
void countdig(int n){
    int count=0;
      while(n>0){
             int rem=n%10;
             count++;
             n=n/10;
      }
    cout<<"Number of digits: "<<count<<endl;
}
void reverses(int n){
    int reverse=0;
    while(n>0){
    int rem=n%10;
     reverse=(reverse*10)+rem;
    n=n/10;
    }
    cout<<"The reversed no. is: "<<reverse<<endl;
}
void palindrome(int n){
    int reverse=0;
    int orgn=n;
    while(n>0){
    int rem=n%10;
    reverse=(reverse*10)+rem;
    n=n/10;
    }
    if(orgn==reverse){
    cout<<"The no. is palindrome no. "<<endl;
    }
    else{
        cout<<"The no. is not palindrome no. "<<endl;
    }
} 
int main(){
     int n,t;
    cout<<"Enter a number for no. of inputs: "<<endl;
       cin>>t;
    for(int i=1; i<=t; i++){
    cout<<"Enter a digit: "<<endl;
    cin>>n;
    countdig(n);
    reverses(n);
    palindrome(n);
}
}