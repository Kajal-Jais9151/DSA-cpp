#include<bits/stdc++.h>
using namespace std;
int longestsubsum(vector<int>& arr, int k){
    int n=arr.size();
    int sum=0, maxi=0,mm=0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
           for(int h=i; h<=j; h++){
            sum+=arr[h];
           }
            if(sum==k){
                 mm=j-i+1;
                maxi=max(maxi,mm);
            }
            
        }
    }
    return mm;
}
int main(){
    vector<int> arr={10, 5, 2, 7, 1, 9};
    int k=15;
    int res=longestsubsum(arr,k);
    cout<<res<<endl;
    return 0;
}