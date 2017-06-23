#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n,a;
	    cin>>n;
 
        vector <long long> v(n);
       
	    for(int i=0;i<n;i++)
	        cin>>v[i];
	
	    sort(v.begin(),v.end());
	    
	    vector<long long>:: iterator it;
	  
	    it=upper_bound(v.begin(),v.end(),0);
	    long long s=0;
        
        if(it==v.end())
        {
            for(int i=0;i<n;i++)
            s+=v[i];
        
        }
        else
        {
            long long a[n];
            int x=it-v.begin();
            
            if(x!=0)
            {
                a[0]=v[0];
                for(int i=1;i<x;i++)
                a[i]=a[i-1]+v[i];
                s+=a[x-1];
            }
        
            long long s1=0;
            
            for(int i=x;i<n;i++)
            s1+=v[i];
            
            s+=(n-x)*s1;
            
            
            
            
            for(int i=x-1;i>=0;i--)
            {
                if(i==0)
                s=max(s,n*(a[0]+s1));
                
                
                else
                {
                    s=max(s,a[i-1]+(n-i)*(s1+v[i]));
                    s1=s1+v[i];
                    //cout<<s<<endl;
                }
            }
            
        }
        cout<<s<<endl;
 
	}
	return 0;
}
