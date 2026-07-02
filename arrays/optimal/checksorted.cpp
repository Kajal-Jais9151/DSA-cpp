#include<bits/stdc++.h>
using namespace std;
bool checksort(vector<int> &arr, int n){
    for(int i=1; i<n; i++){
        if(arr[i]>=arr[i-1]){
            
        }
        else{
            return false;
        }
        return true;
    }
}
int main(){
    vector<int> arr={100,20,50,52,55};
    int n=arr.size();
    int result=checksort(arr, n);
    if(result==true){
        cout<<"Array is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted."<<endl;
    }
    
}