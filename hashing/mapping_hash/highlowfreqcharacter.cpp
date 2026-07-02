#include<iostream>
#include<unordered_map>
using namespace std;
class FreqCounter{
    public:
    void frequency(string s, int n){
         unordered_map<char, int> mpp;
         for(int i=0; i<s.size(); i++)
         {
            mpp[s[i]]++;
         }
         int maxFreq=0, minFreq=n;
         char minEle='\0', maxEle='\0';
         for(auto it: mpp){
            char element=it.first;
            int count=it.second;

            if(count>maxFreq){
                maxFreq=count;
                maxEle=element;
            }
            if(count<minFreq){
                minFreq=count;
                minEle=element;
            }
         }
         cout<<"Highest frequency element is:"<<maxEle<<endl;
         cout<<"Lowest frequency element is:"<<minEle<<endl;
    }
};
    int main(){

        cout<<"Enter no. of queries:";
        int q;
        cin >>q;
        for(int i=0; i<q; i++){
             FreqCounter f;
              string s;
            cout<<"Enter string:";
            cin>>s;
            f.frequency(s, s.size());
        }
}

