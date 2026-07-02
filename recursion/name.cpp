#include<iostream>
using namespace std;

int name(int n){
    if(n<1) 
     return -1;
    name(n-1);
    cout<<"Kajal"<<endl;
}
int main(){
    int k,n;
    cout<<"Enter no. of inputs :";
    cin>>k;
    for(int i=0; i<k; i++){
        cout<<"Enter number of times you want to print thge name :";
        cin>>n;
        name(n);
    }
}