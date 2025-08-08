#include<iostream>
#include<vector>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int max=0;
         int n;
         cin>>n;
         for(int i=0;i<n;i++)
         {
             int num;
             cin>>num;
             if(i==0 || num>max)
             {
                 max=num;
             }
         }
         cout<<"Value is "<<max<<endl;
     }
 }