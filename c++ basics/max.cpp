#include<iostream>
using namespace std;
void maxx(int n1, int n2){
    int res=n1>n2 ? n1 : n2;
    cout<<"max number is: "<<res;
}
int main(){
    int a,b;
    cout<<"Enter first number:"<<endl;
    cin >>a;
     cout<<"Enter second number:"<<endl;
    cin>>b;
    maxx(a,b);
}