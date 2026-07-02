#include<iostream>
using namespace std;
//pass by value
void pass(string s){
   s[0] ='p';
   cout<<s<<endl;
}

//pass by reference
void passs(string &s){
    s[0]='r';
    cout<<s<<endl;
}
int main(){
    string s="totty";
    pass(s);
    cout<<s<<endl;
    passs(s);
    cout<<s<<endl;
    return 0;
}