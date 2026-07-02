#include<bits/stdc++.h>
using namespace std;
int removedup(vector<int>& nums, int n){
    unordered_set<int> seen;
    int index=0;
    for(int num:nums){
        if(seen.find(num)==seen.end()){
            seen.insert(num);
            nums[index]=num;
            index++;
        }
    }
    return index;
}
int main(){
    vector<int> nums={10,20,20,40,40,40,50};
    int n=nums.size();
    int result=removedup(nums, n);
    cout<<"Array after removing duplicates is: "<<endl;
    for(int i=0; i<result; i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}