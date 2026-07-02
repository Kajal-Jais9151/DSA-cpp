#include<iostream>
using namespace std;

int printasc(int n){
    if(n<1) 
     return -1;
    printasc(n-1);
    cout<<n<<" "<<endl;
}
int printdesc(int j,int n){
    if(j>n) 
     return -1;
    printdesc(j+1,n);
    cout<<j<<" "<<endl;
}
int main(){
    int n,k;
    cout<<"Enter no. of inputs :";
    cin>>k;
    for(int i=0; i<k; i++){
        cout<<"Enter a no. :";
        cin>>n;
        printasc(n);
        printdesc(1,n);
    }
}