#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{   string a,b,c;
	    long long int n;
	    cin>>a>>b>>c>>n;
	
	    //for(long int i=0;i<n;i++)
	    //a=a+b;
	          
	    //a=a+c;
	    long long int s=0,s1=0,s2=0,s3=0,f=0;
	    
	   for(long int i=c.length()-1;i>=0;i--)
	    {
	        if(c[i]=='0' && f==0)
	            f=1;
	        else if(c[i]=='1'&& f==0)
	            s3++;
	        else if(c[i]=='1')
	            s2++;
	    }
	   
	   if(s3==c.length())
	   {
	    s3=0;s2=0;f=0;
	    for(long int i=b.length()-1;i>=0;i--)
	    {
	        if(b[i]=='0' && f==0)
	            f=1;
	        else if(b[i]=='1'&& f==0)
	            s3++;
	        else if(b[i]=='1')
	            s2++;
	    }
	    
	    if(s3==b.length())
	    {   s3=0;s2=0;f=0;
	        for(long int i=a.length()-1;i>=0;i--)
	        {
	            if(a[i]=='0' && f==0)
	                f=1;
	            else if(a[i]=='1'&& f==0)
	                s3++;
	            else if(a[i]=='1')
	                s2++;
	        }   
	        if(s3!=a.length())
	            s+=s2;
	   
	    }
	    else
	     {   s+=(((s3+s2)*n)-s3);
	         for(long int i=a.length()-1;i>=0;i--)
	            if(a[i]=='1')
	             s++;
	     }
	  }
	   else
	   {
	       s+=s2;
	       for(long int i=b.length()-1;i>=0;i--)
	        if(b[i]=='1')
	         s1++;
	       s+=(s1*n);
	       for(long int i=a.length()-1;i>=0;i--)
	        if(a[i]=='1')
	        s++;
	   }
	    s++;
	    cout<<s<<endl;
	}    
	return 0;
}
