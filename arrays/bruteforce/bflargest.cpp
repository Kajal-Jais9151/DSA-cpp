#include<bits/stdc++.h>
using namespace std;
int largest(vector<int> &arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
 int main(){
    vector<int> arr={10,20,14,15,13,22,1};
    int result=largest(arr);
    cout<<"Largest element in given array is: "<<result<<endl;
 }
