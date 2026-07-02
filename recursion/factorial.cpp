#include<iostream>
using namespace std;
int fact(int n){
    if(n<=1){
     return -1;
    }
    return n*fact(n-1);
}
int main(){
    int n,k;
    cout<<"Enter no. of inputs: "<<endl;
    cin>>k;
    for(int i=0; i<k; i++){
       cout<<"Enter a no.: "<<endl;
       cin>>n;
       int f=fact(n);
       cout<<"Factorial= "<<f;
    }
}