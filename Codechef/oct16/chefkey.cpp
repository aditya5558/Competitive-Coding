#include <iostream>
#include<math.h>
using namespace std;
 
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,m,c,count=0;
	    cin>>n>>m>>c;
	    if(c>n*m)
	    cout<<"0"<<endl;
	    else
	    {   long long int p1=sqrt(c);
	        for(long long int i=1;i<=p1;i++)
	        {   long long int p=c/i;
	            if(i*p==c)
	            {
	                if(i<=n && p<=m)
	                count++;
	                
	                if(i!=p)
	                {if(i<=m && p<=n)
	                count++;}
	            }
	        }
	        
	        
	        cout<<count<<endl;
	
	    }        
    }
	return 0;
}
  
