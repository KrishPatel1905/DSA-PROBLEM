#include<iostream>
using namespace std;
int main()
{
      int n;
    cout<<"Enter the number of element :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        bool flag=true;
        for(int j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout<<arr[i]<<" ";
        }
        // else{cout<<"No Unique element are possible ...";}
    }
}