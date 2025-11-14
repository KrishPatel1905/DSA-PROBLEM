#include<iostream>
using namespace std;
int main()
{
       int n;
       cout<<"Enter The Size of Array:";
       cin>>n;
       int arr[n];
       for (int i = 0; i < n; i++)
       {
         cin>>arr[i];
       }

       for(int i=0;i<n;i++)
       {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                cout<<"Element :"<<arr[i]<<endl;
                break;
            }
        }
       }
       
}