#include<iostream>
using namespace std;
int sum(int n){
    if(n<1){
     return -1;
    }
    return n+sum(n-1);
}
int main(){
    int n,k;
    cout<<"Enter no. of inputs: "<<endl;
    cin>>k;
    for(int i=0; i<k; i++){
       cout<<"Enter a no.: "<<endl;
       cin>>n;
       int s=sum(n);
       cout<<"Sum= "<<s;
    }
}