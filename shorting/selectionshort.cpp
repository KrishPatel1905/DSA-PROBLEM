#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
          int min=i;
          for(int j=i+1;j<n;j++)
          {
            if(arr[min]>arr[j])
            {
                min=j;
            }
          }
          swap(arr[i],arr[min]);
    }
    cout<<"Shorted Array :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}