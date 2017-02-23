#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,s=0;
	    double avg;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n);
	    if(a[0]==2||a[n-1]!=5)
	    cout<<"No"<<endl;
	    else
	    {   
	        for(int i=0;i<n;i++)
	        s+=a[i];
	        avg=((double)s)/n;
	        if(avg>=4.0)
	        cout<<"Yes"<<endl;
	        else
	        cout<<"No"<<endl;
	        
	    }
	    
	}
	return 0;
}
 
