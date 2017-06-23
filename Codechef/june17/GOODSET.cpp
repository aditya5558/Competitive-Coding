#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long t;
	cin>>t;
	
	long long a[101];
	
	a[0]=400;
	for(int i=1;i<100;i++)
	{
	    a[i]=1+a[i-1];
	    
	}
	
	while(t--)
	{
	    long long n;
	    cin>>n;
	    
	    for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;
	    
	}
	
	
	return 0;
}
