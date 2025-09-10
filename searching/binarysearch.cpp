#include<iostream>
using namespace std;
   int binarySearch(int arr[],int n,int key)
   {     int low=0,high=n-1;
         while (low<=high)
         {
            /* code */
            int mid=(low+high)/2;
            if(arr[mid]==key)
            {
                return mid;
            }
            else if(arr[mid]<=key){
                 low=mid+1;
            }
              else{
                high=mid-1;
            }
         }
         return -1;
         
   }
int main()
{
    int n;
    cout<<"Enter The Value of n :";
    cin>>n;
    int arr[n];
    cout<<"Enter the Value(But Value Must Be Shoreted Form):";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter The Key Value :";
    int key;
    cin>>key;
    int value=binarySearch(arr,n,key);
    if(value==-1)
    {
        cout<<"Value Not Found .................";
    }
    else
    {

    
    cout<<"The Index Is : "<<value<<"The Value is : "<<arr[value];
 }
    return 0;
}