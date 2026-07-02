#include<bits/stdc++.h>
using namespace std;

int linear_Search(vector<int>& arr, int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={10,12,41,20,30,14};
    int n=arr.size();
    int target=11;
    cout<<target<<" is found at "<<linear_Search(arr, n, target)<<endl;
}