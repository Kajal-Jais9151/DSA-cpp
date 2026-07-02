#include<bits/stdc++.h>
using namespace std;
void selsort(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        int mini=i;
        for(int j=i; j<n; j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int t=arr[mini];
        arr[mini]=arr[i];
        arr[i]=t;
    }
}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selsort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}