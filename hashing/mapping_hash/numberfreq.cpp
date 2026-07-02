#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int ,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        cout<<it.first<<"->"<<it.second<<endl;
        
    }
    cout<<"Enter no. of queries:";
    int q;
    cin>>q;
    cout<<"Enter queries to be searched:";
    while(q--){
        int num;
        cin>>num;
        cout<<"Frequency of "<<num<<" is:";
        cout<<mpp[num]<<endl;
    }

}