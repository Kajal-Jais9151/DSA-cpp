#include<iostream>
#include<map>
using namespace std;
int main(){
    int q;
    cout<<"Enter no. of queries:";
    cin>>q;
    for(int i=0;i<q;i++)
    {
    string s;
    cout<<"Enter string:";
    cin>>s;
    map<char ,int> mpp;
    for(int i=0;i<s.size();i++){
        mpp[s[i]]++;
    }
    for(auto it: mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
}
}