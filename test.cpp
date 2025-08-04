#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20};
    int *p=arr;
     *p ++;
    cout<<arr[0]<<arr[1]<<*p;
    return 0;
}