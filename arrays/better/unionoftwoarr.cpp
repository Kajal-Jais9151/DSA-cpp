#include<bits/stdc++.h>
using namespace std;

vector <int> unions(vector<int>& a1, vector<int>& a2){
    map<int, int> freq;
    int n1=a1.size();
    int n2=a2.size();
    for(int i=0; i<n1; i++){
        freq[a1[i]]++;
    }
    for(int i=0; i<n2; i++){
        freq[a2[i]]++;
    }
    vector<int> unionn;
    for(auto &it: freq){
        unionn.push_back(it.first);
    }
    return unionn;
}
    
int main(){
    vector<int> a1={1,2,3,5,7};
    vector<int> a2={2,4,6,7,8};
   vector<int> result=unions(a1,a2);
   for(int i=0; i<result.size(); i++){
       cout<<result[i]<<" ";
   }

}