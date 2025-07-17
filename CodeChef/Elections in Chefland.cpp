#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,age;
	cin>>t;
	while(t--)
	{
	    int n,a,c=0;
	    cin>>n>>a;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    {
	       cin>>arr[i];
	       if(a<=arr[i])
	       {
	           c++;
	       }
	    }
	  cout<<c<<endl;
	    
	}

}
