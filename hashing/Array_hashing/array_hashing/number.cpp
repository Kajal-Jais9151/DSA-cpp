#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    cout<<"Enter array elements:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int hashh[13]={0};
for(int i=0; i<n;i++){
    hashh[arr[i]]++;
}
cout<<"Enter the no. of queries:";
int q;
cin>>q;
while(q--){
    cout<<"Enter the query to be searched:";
    int num;
    cin>>num;
    cout<<hashh[num]<<endl;
}
}