#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{int rev=0,digit;
	    int n;
	    cin>>n;
	    while(n!=0)
	    {
	         
	    digit= n%10;
	    rev = (rev*10)+digit;
	    n=n/10;
	    }
	    cout<<rev<<endl;
	  
	}

}
