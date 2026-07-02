#include<bits/stdc++.h>
using namespace std;
int slargest(vector <int> &arr, int n){
    int largest=arr[0];
    int seclar=-1;
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            seclar=largest;
            largest=arr[i];
        }
    else if(arr[i]<largest && arr[i]>seclar){
         seclar=arr[i];
    }
}
return seclar;
}
int ssmallest(vector<int> &arr, int n){
    int smallest=arr[0];
    int secsmall=1e6;
    for(int i=1; i<n; i++){
        if(arr[i]<smallest){
            secsmall=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<secsmall){
            secsmall=arr[i];
        }
    }
    return secsmall;
}
int main(){
    vector<int> arr={10,20,41,51,10,20};
    int n=arr.size();
    cout<<"Second largest element in array is :"<<slargest(arr,n)<<endl;
    cout<<"Second smallest element in array is :"<<ssmallest(arr,n)<<endl;
}