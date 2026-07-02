#include<bits/stdc++.h>
using namespace std;

int secondlargest(vector<int> &arr, int n){
    int seclar=-1;
    int largest=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(arr[i]>seclar && arr[i]!=largest){
            seclar=arr[i];
        }
    }
    return seclar; // Return the second largest element
}
 int main(){
    vector<int> arr={20,20,20,20,20};
    int n=arr.size();
    int result=secondlargest(arr, n);
    cout<<"Second largest element in given array is: "<<result<<endl;
    return 0;
 }
