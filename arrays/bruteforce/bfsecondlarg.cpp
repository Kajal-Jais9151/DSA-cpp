#include<bits/stdc++.h>
using namespace std;
int largest(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());
    return arr[n-1];
}
int secondlargest(vector<int> &arr, int n, int largest){
    int seclar;
    for(int i=n-2; i>=0; i--){
        if(arr[i]!=largest){
            seclar=arr[i];
            return seclar;
        }
    }
    return -1; // Return -1 if no second largest element is found
}
 int main(){
    vector<int> arr={20,20,20,20,20};
    int n=arr.size();
    int largest_elem=largest(arr, n);
    int result=secondlargest(arr, n, largest_elem);
    cout<<"Second largest element in given array is: "<<result<<endl;
    return 0;
 }
