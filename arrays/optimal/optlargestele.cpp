#include<bits/stdc++.h>
using namespace std;
//  int largest(int arr[], int n){
//     int max=arr[0];
//     for(int i=1; i<n; i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;
//  }
//  int main(){
//      int arr[]={20,410,100,21,55};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int result = largest(arr,n);
//     cout<<result<<endl;
//  }
int largest(int arr[], int n){
    int maxi=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}
int main(){
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    if(n<=0){
        cout<<"Array is empty."<<endl;
        return 0;
    }
    int arr[n];
    for(int i=0; i<n; i++)
{
    cin>>arr[i];
}   
// int result=largest(arr,n);
cout<<"Largest element in given array is: "<<largest(arr,n)<<endl; 
}