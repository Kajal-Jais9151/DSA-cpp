#include<iostream>
using namespace std;
void printarr(int arr[], int n){
    cout<<"Array is:"<<endl;
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" "<<endl;
     }
}
int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter elements in array: "<<endl;
        cin>>arr[i];
    }
    printarr(arr, n);
    return 0;
}