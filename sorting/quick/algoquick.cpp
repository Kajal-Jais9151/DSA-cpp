#include<bits/stdc++.h>
using namespace std;

void swap(vector<int> arr, int &a, int&b){
    int t=arr[a];
    arr[a]=arr[b];
    arr[b]=t;
}
int partition(vector<int> &arr, int low, int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<= pivot && i<= high-1){
            i++;
        }
        while(arr[j]> pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
        else{
            swap(arr[low], arr[j]);
        }
    }
    return j;
}
void quick_sort(vector<int> &arr, int low, int high){
    if(low<high){
        int pindx =  partition(arr, low, high);
        quick_sort(arr, low, pindx-1);
        quick_sort(arr, pindx+1, high);
    }
}
int main(){
    vector<int> arr={10,12,2,3,5,4,9};
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    quick_sort(arr, 0, arr.size()-1);
    for(int x: arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}