#include<bits/stdc++.h>
using namespace std;
int leftrotatebyone(vector<int>& nums, int k, int n){
    int temp[k];
    for(int i=0; i<k; i++){
        temp[i]=nums[i];
    }
    for(int i=k; i<nums.size(); i++){
        nums[i-k]=nums[i];
    }
    int j=0;
    for(int i=n-k; i<n; i++){
        nums[i]=temp[i-(n-k)];
    }
}
 int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int n=arr.size();
    int k=2; // Number of positions to rotate

    leftrotatebyone(arr, k, n);

    cout<<"Array after left rotation by "<<k<<" positions is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
 }
