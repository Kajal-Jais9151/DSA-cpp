#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int didswap=0;
void bubbleSort(int arr[],int n){                                                      
    for(int i=n-1; i>=0; i--){
        for(int j=0;j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap++;
            }
        }
        if(didswap==0){
            break;
        }
    }
    cout<<"swaps= "<<didswap<<endl;
}

int main(){
    int arr[] = {0,1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Bubble Sort: "<<endl;
    bubbleSort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}