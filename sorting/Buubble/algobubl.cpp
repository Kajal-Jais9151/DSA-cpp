#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void bubbleSort(int arr[],int n){                                                      
    for(int i=n-1; i>=0; i--){
        for(int j=0;j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void bubbleSort1(int arr[],int n){
    for(int i=0; i<n-1;i++){
        for(int j=0; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[] = {2,0,1,5,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Bubble Sort: "<<endl;
    bubbleSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Bubble Sort 1: "<<endl;
    bubbleSort1(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}