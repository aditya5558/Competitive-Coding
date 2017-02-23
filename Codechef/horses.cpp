#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	// your code goes here
	long int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long int a[n],s[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    sort(a,a+n);
	    for(int i=0;i<n-1;i++)
	    {
	        s[i]=a[i+1]-a[i];
	    }
	    sort(s,s+n-1);
	    cout<<s[0]<<endl;
	    
	}
	return 0;
}
 
