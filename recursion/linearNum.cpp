#include<iostream>
using namespace std;

int printdesc(int j,int n){
    if(j<1) 
     return -1;
    cout<<j<<" "<<endl;
    printdesc(j-1,n);
}
int printasc(int j,int n){
    if(j>n) 
     return -1;
    cout<<j<<" "<<endl;
    printasc(j+1,n);
}
int main(){
    int n,k;
    cout<<"Enter no. of inputs :";
    cin>>k;
    for(int i=0; i<k; i++){
        cout<<"Enter a no. :";
        cin>>n;
        cout<<"Numbers in descending order:"<<endl;
        printdesc(n,n);
         cout<<"Numbers in ascending order:"<<endl;
         printasc(1,n);
    }
}