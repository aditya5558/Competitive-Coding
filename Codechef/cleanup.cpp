#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	long int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    int a[n],q,b[n];
	    for(int i=0;i<n;i++)
	    a[i]=i+1;
	    for(int i=0;i<m;i++)
	    {   cin>>q;
	        a[q-1]=-1;
	    }
	    int f=-1,k=0;
	    
	    for(int i=0;i<n;i++)
	    {    if(a[i]!=-1)
	       { b[k++]=a[i];
	       // cout<<b[k-1]<<" ";
	       }
	    }
	    for(int i=0;i<k;i+=2)
	    {
	        
	            cout<<b[i]<<" ";
	           // i++;
	    }
	   // if(f==-1)
	    
	   cout<<endl;
	    for(int i=1;i<k;i+=2)
	    {
	        
	           cout<<b[i]<<" ";
	           // i++;
	    }
	    cout<<endl;
	}
	return 0;
}
