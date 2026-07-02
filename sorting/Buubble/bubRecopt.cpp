#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a=b;
    b= temp;
}
void bubbleSort(int arr[], int n){
    if(n == 1) return;
    int didswap=0;
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didswap++;
            }
        }
        if(didswap==0){
            return;
        }
        bubbleSort(arr, n-1); 
           cout<<"swaps= "<<didswap<<endl;                                                           
    }
int main(){
    int n;
    cout<<"Enter size of array: "; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}