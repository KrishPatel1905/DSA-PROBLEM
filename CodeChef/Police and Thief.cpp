#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int total=a-b;
	    if(total<0)
	    {
	        cout<<total*(-1)<<endl;
	    }
	    else
	    {
	        cout<<total<<endl;
	    }
	}

}
