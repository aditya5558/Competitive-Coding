#include <bits/stdc++.h>
using namespace std;
 
 
long long m=1000000007;
 
int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	long long t;
	cin>>t;
	
	while(t--)
	{
	    long long p,q,r;
	    cin>>p>>q>>r;
	    
	    vector<long long> a(p);
	    vector<long long> b(q);
	    vector<long long> c(r);
	    
	    for(int i=0;i<p;i++)
	    cin>>a[i];
	    
	    for(int i=0;i<q;i++)
	    cin>>b[i];
	    
	    for(int i=0;i<r;i++)
	    cin>>c[i];
	    
	    sort(a.begin(),a.end());
	    sort(b.begin(),b.end());
	    sort(c.begin(),c.end());
	    
        long long s=0;
        
        long long sum[p],sum1[r];
        
        sum[0]=a[0];
        sum1[0]=c[0];
        
        for(int i=1;i<p;i++)
        sum[i]=(sum[i-1]%m+a[i]%m)%m;
        
        for(int i=1;i<r;i++)
        sum1[i]=(sum1[i-1]%m+c[i]%m)%m;
        
        
        for(int i=0;i<q;i++)
        {
            if(b[i]<a[0] || b[i]<c[0])
                continue;
                
            vector<long long>::iterator it1;
            vector<long long>::iterator it2;
             
            it1=upper_bound(c.begin(),c.end(),b[i]);
            it2=upper_bound(a.begin(),a.end(),b[i]);
            
            int x=it1-c.begin();
            int x1=it2-a.begin();
         
            if(x!=0 && x1!=0)
            {
                
                x1--;
                x--;
                
                s=(s%m+((sum1[x]%m)*b[i]%m*(x1+1)%m)%m)%m;
                
                //cout<<s<<endl;
                
                s=(s%m+((sum[x1]%m)*b[i]%m*(x+1)%m)%m)%m;
                // cout<<s<<endl;
                s=(s%m + (sum[x1]%m*sum1[x]%m)%m)%m;
                // cout<<s<<endl;
                s=(s%m+(b[i]%m*b[i]%m*(x+1)%m*(x1+1)%m)%m)%m;
            }
            
           
        }
       
        
        
        cout<<s<<endl;
	    
	}
	
	
	return 0;
}
