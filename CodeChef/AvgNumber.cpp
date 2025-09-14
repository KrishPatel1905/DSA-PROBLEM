#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes heree
	int n,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a>>b>>c;
	    float d=(a+b)/2.0;
	    if(c<d)
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

}
