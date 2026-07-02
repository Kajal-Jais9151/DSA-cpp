#include<bits/stdc++.h>
using namespace std;
void insernSort(int arr[], int n){
    for(int i=0; i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
           int t=arr[j];
           arr[j]=arr[j-1];
           arr[j-1]=t;
            j--;
        }
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insernSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}