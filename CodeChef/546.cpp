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
	    int c=(a*b)/4;
	    float d=(a*b)/4.0;
	    if(c<d)
	    {
	        c=c+1;
	        cout<<c<<endl;
	    }
	    else
	    {
	        cout<<c<<endl;
	    }
	    
	}

}
