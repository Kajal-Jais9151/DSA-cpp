#include<bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int>& a1, vector<int>& a2){
    int n1=a1.size();
    int n2=a2.size();
    int i=0,j=0;
    vector<int> unionArr;
    while(i<n1 && j<n2){
        if(a1[i]<= a2[j]){
            if(unionArr.size()==0 || unionArr.back()!=a1[i]){
                unionArr.push_back(a1[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back()!=a2[j]){
                unionArr.push_back(a2[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionArr.size()==0 || unionArr.back()!=a1[i]){
                unionArr.push_back(a1[i]);
            }
            i++;
    }
     while(j<n2){
        if(unionArr.size()==0 || unionArr.back()!=a2[j]){
                unionArr.push_back(a2[j]);
            }
            j++;
    }
    return unionArr;
}
int main(){
    vector<int> a1={1,2,4,5,8,9};
    vector<int> a2={0,3,4,6,8,10};
    vector<int> result=sortedArray(a1,a2);
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
}