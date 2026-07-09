#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int maxsumzero(vector<int>& nums){
    int n=nums.size();
    int maxi=0;
    int sum=0;
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        sum+=nums[i];
        if(sum==0){
            maxi=i+1;
        }
        else{
            if(mp.find(sum)!=mp.end()){
                maxi=max(maxi,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
    }
    return maxi;
}
int main(){
    vector<int> nums={1,-1,3,2,-2,-8,1,7,10,23};
    cout<<maxsumzero(nums)<<endl;
    return 0;
}