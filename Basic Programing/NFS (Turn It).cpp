#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int  u,v,a,s;
	    cin>>u>>v>>a>>s;
	    int temp=u*u-2*a*s;
	    if(temp<=0)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    {
	    double temp1=sqrt(temp);
	    if(v>=temp1)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    {
	        cout<<"No\n";
	    }
	    }
	}
	return 0;
}
