#include <bits/stdc++.h>
using namespace std;
 
long int sum(int i,int j,long int dis[])
{       if(i==j-1)
        return 0;
        
        else
        {
            if(dis[i]<=dis[j-1])
            return dis[i]+sum(i+1,j,dis);
            else
            return dis[j-1]+sum(i,j-1,dis);
        }
        
    
}
 
 
int main() 
{
	// your code goes here
	long long t,n;
	cin>>t;
	while(t--)
	{
	    long int n;
	    cin>>n;
	    char a[n+1];
	    cin>>a;
	    long int d[n];
	    for(int i=0;i<n;i++)
	    cin>>d[i];
	    long int dis[n],one[n];
        long int k=0;	  
	    
	    for(int i=0;i<n;i++)
	    {   if(a[i]=='1')
	            one[k++]=i;
	            
	        
	        dis[i]=d[i+1]-d[i];
	       // cout<<dis[i]<<" ";
	    }
	    dis[n-1]=dis[n-2];
	    
	    long int s=0;
	    
	    if(a[0]=='0')
	    {   
	        s+=(d[one[0]]-d[0]);
	    }
	    //cout<<k;
	    k--;
	   // cout<<a[n-1]<<" ";
	    if(a[n-1]=='0')
	    {
	        s+=(d[n-1]-d[one[k]]);
	       // cout<<k<<" ";
	    }
	    
	    for(int j=0;j<k;j++)
	    {
	        //cout<<one[j]<<one[j+1]<<" ";
	        s+=sum(one[j],one[j+1],dis);
	    }
	   cout<<s<<endl;
	}
  return 0;
}
