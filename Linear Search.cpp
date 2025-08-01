#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int c=0;
int search(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        c++;
        if(a[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,v,k;
    cin>>n;
   
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     cin>>k;
    v=search(arr,n,k);  
    if(v==-1)
    {
        cout<< "Element "<<k<< " is not present in the array"<<endl;
        cout<<c;
    }
    else{
        
        cout<<v<<endl;
        cout<<c;
    }
    
    return 0;
}
