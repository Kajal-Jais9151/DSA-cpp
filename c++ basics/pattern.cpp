#include<iostream>
using namespace std;
void pat1(int n, int m){
   for(int i=0; i<n; i++){
    for (int j = 0; j < m; j++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
}
void pat2(int n, int m){
   for(int i=0; i<n; i++){
    for (int j = 0; j <= i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
   }
}
void pat3(int n, int m){
   for(int i=1; i<n; i++){
    for (int j = 1; j <= i; j++)
    {
        cout<<j;
    }
    cout<<endl;
   }
}
void pat4(int n, int m){
   for(int i=1; i<n; i++){
    for (int j = 1; j <= i; j++)
    {
        cout<<i;
    }
    cout<<endl;
   }
}
void pat5(int n, int m){
   for(int i=1; i<=n; i++){
    for (int j = 1; j <=n-i+1; j++)
    {
        cout<<j;
    }
    cout<<endl;
   }
}
void pat6(int n, int m){
   for(int i=0; i<n; i++){
    for (int j = 0; j <n-i-1; j++)
    {
        cout<<" ";
    }
    for (int j = 0; j<2*i+1; j++)
    {
        cout<<"*";
    }
    for (int j = 0; j <n-i-1; j++)
    {
        cout<<" ";
    }
    cout<<endl;
   }
}
void pat7(int n, int m){
   for(int i=0; i<n; i++){
    for (int j = 0; j<i;j++)
    {
        cout<<" ";
    }
    for (int j = 0; j<2*n-(2*i+1); j++)
    {
        cout<<"*";
    }
    for (int j = 0; j <i; j++)
    {
        cout<<" ";
    }
    cout<<endl;
   }
}
void pat8(int n,int m){
    for (int i = 1; i < 2*n-1; i++)
    {
        int stars=i;
        if (i>n)
        {
           stars=2*n-i; 
        }
        
        for (int j= 1; j <stars ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
void pat9(int n,int m){
    for (int i = 1; i <=n; i++)
    {  
        for (int j= 1; j <=i ; j++)
        {
            if(i%2==0){
                if(j%2==0){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
            else{
                if(j%2==0){
                    cout<<"0 ";
                }
                else{
                    cout<<"1 ";
                }
            }
        }
        cout<<endl;
    }
}   
void pat10(int n, int m)
{ 
    int space=2*(n-1);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        for (int j = 1; j <=space ; j++)
        {
            cout<<" ";
        }
        for (int j = i; j >=1; j--)
        {
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}
void pat11(int n, int m)
{ int counter=1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<counter<<" ";
            counter++;
        }
       cout<<endl; 
    }
    
}
void pat12(int n, int m)
{ 
    for (int i=0; i <n; i++)
    {
        for (char ch = 'A'; ch <='A'+i; ch++)
        {
            cout<<ch<<" ";
        }
       cout<<endl; 
    }
    
}
void pat13(int n, int m)
{ 
    for (int i=n-1; i >= 0; i--)
    {
        for (char ch = 'A'; ch <='A'+i; ch++)
        {
            cout<<ch<<" ";
        }
       cout<<endl; 
    }
    
}
void pat14(int n, int m)
{ 
    for (int i=0; i < n; i++)
    {
        for (char ch = 'A'; ch <='A'+i; ch++)
        { 
            char c='A'+i;
            cout<<c<<" ";
        }
       cout<<endl; 
    }
    
}
void pat15(int n, int m){
    for(int i=0; i<n; i++){
        for (int j =0 ; j<n-i-1; j++)
        {
            cout<<" ";
        }
        char ch='A';
        int breakpt=(2*i+1)/2;
        for (int j=1; j<=2*i + 1; j++)
        {
            cout<<ch;
            if( j<= breakpt) ch++;
            else ch--;
            
        }
        for (int j = 0; j <n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,m,k;
    cin>>k;
for(int i=0; i<k; i++){
    cout<<"Enter the no of rows: "<<endl;
    cin >>n;
    cout<<"Enter the no of columns: "<<endl;
    cin >>m;
   cout<<"First pattern:"<<endl;
   pat1(n,m);
   cout<<"Second pattern:"<<endl;
   pat2(n,m);
   cout<<"Third pattern:"<<endl;
   pat3(n,m);
   cout<<"Fourth pattern:"<<endl;
   pat4(n,m);
   cout<<"Fifth pattern:"<<endl;
   pat5(n,m);
  cout<<"Sixth pattern:"<<endl;
   pat6(n,m);
   pat7(n,m);
   cout<<"Eighth pattern:"<<endl;
   pat8(n,m);
   cout<<"Ninth pattern:"<<endl;
   pat9(n,m);
   cout<<"tenth pattern:"<<endl;
   pat10(n,m);
   cout<<"Eleventh pattern:"<<endl;
   pat11(n,m);
   cout<<"Twelth pattern:"<<endl;
   pat12(n,m);
   cout<<"Thirteenth pattern:"<<endl;
   pat13(n,m);
   cout<<"Fourteenth pattern:"<<endl;
   pat14(n,m);
   cout<<"Fifteenth pattern:"<<endl;
   pat15(n,m);
}
}
