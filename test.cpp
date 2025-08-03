#include<iostream>
using namespace std;
int  linear(int arr[],int n,int key )
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
           return i;
        }
        

        
    }
    return -1;
}
int main()
{
    int n,key,c=0;

    cout<<"Enter the value of n :";
    cin>>n;
    cout<<"Enter the key value : ";
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int value =linear(arr,n,key);
    if(value==-1)
    {
        cout<<"Not Searching Found ............";
    }
    else{
        cout<<"The Index :"<<value<<" The Value is "<<arr[value];
    }



    return 0;
}