#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int LowerBound(vector<int> nums, int x){
    int n=nums.size();
    int low=0, high=n-1;
    int ans=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> nums={0,2,3,4,4,6,6,7,8,9};
    int x=5;
    cout<<LowerBound(nums,x)<<endl;
    return 0;
}