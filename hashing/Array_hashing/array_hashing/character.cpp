#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter size of array:";
    // cin>>n;
    // cout<<"Enter array elements:";
    // char arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    string s;
    cout<<"Enter a string:";
    cin>>s;
    int hashh[26]={0};
    for(int i=0; i<s.size();i++){
        hashh[s[i]-'a']++;
    }
    cout<<"Enter the no. of queries:";
    int q;
    cin>>q;
    while(q--){
        cout<<"Enter the query to be searched:";
        char num;
        cin>>num;
        cout<<hashh[num-'a']<<endl;
    }
}