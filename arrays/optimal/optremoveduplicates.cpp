#include<bits/stdc++.h>
using namespace std;
int removeduplicates(vector<int> &arr, int n){
     int i=0;
        for(int j=1; j<n; j++){
            if(arr[i]!=arr[j]){
                arr[i+1]=arr[j];
                i++;
            }
        }
        return i+1;
    } 
 int main(){
    vector<int> arr={10,20,20,15,13,22};
    int n=arr.size();
    int result=removeduplicates(arr, n);
    cout<<"Array after removing duplicates is: "<<endl;
    for(int i=0; i<result; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
