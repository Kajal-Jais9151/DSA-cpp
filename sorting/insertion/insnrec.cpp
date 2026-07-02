#include<bits/stdc++.h>
using namespace std;
void insernSort(int arr[],int i, int n){
    if(i==n) return;
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
           int t=arr[j];
           arr[j]=arr[j-1];
           arr[j-1]=t;
            j--;
        }
        insernSort(arr, i+1, n);
    }

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    insernSort(arr, 0, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}