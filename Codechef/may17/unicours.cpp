#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t--)
	{
	    long int n,a[100000];
	    cin>>n;
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    long int s=n-a[n-1],s1=a[n-1];
	    
	    for(int i=n-2;i>=0;i--)
	    {
	        if(a[i]>s1)
	        {
	            s=i+1-a[i]+(n-1-i);
	            s1=a[i];
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}
