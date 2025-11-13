#include<iostream>
using namespace std;
int Rightrotation(int arr[],int n,int d)
{
    d = d % n;
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]= arr[n-d+i];
    }
    for(int i = n-1;i>=d;i--)
    {
            arr[i]=arr[i-d];
    }
    for(int i=0;i<d;i++)
    {
        arr[i]=temp[i];
    }


}
int main()
{
    int n;
    cout<<"Enter The Element of an array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d;
    cout<<"Enter The key Element :";
    cin>>d;
    Rightrotation(arr,n,d);

      cout << "Array after RIGHT rotation: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}