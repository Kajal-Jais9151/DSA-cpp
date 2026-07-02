#include<iostream>
using namespace std;
int sum(int a ,int b){
    int s=a+b;
    cout<<"sum= "<<s;
return s;
}
int main(){
    int a,b;
    cout<<"Enter first number:"<<endl;
    cin >>a;
     cout<<"Enter second number:"<<endl;
    cin>>b;
    sum(a,b);
    return 0;
}