#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
void printdivisor(int n){
    vector<int> v;
     for (int i = 1; i <=sqrt(n); i++)
 {
     if(n%i==0)
    {
        v.push_back(i);
            if((n/i)!= i)
           {
              v.push_back((n/i));
           }
    }
} 
sort(v.begin(), v.end());
for(auto it:v)
cout<<it<<" ";
} 
int main(){
    int n,k;
    cout<<"Enter no of inputs: "<<endl;
    cin>>k;
    for (int i = 1; i <= k; i++)
    {
         cout<<"Enter a number to find a divisor: "<<endl;
        cin>>n;
        printdivisor(n);
    }
   return 0; 
}