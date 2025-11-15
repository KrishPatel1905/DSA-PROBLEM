#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of element ::";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool flag = true;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i];
                flag = false;
                break;
            }
        }
    }

    if(flag)
    {
         cout<<"No Duplicate Element Availble :";
    }
}