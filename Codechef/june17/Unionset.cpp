#include <bits/stdc++.h>
using namespace std;
 
long long k;
 
int uni(vector<int> v[],int i,int j)
{
    int k1=0,k2=0,c=0;
 
    while(k1<v[i].size() && k2<v[j].size())
    {
        if(v[i][k1]==v[j][k2])
        {
            k1++;
            k2++;
            c++;
        }    
        else if(v[i][k1]<v[j][k2])
        {    k1++;
             c++;
        }
        else
        {    k2++;
             c++;
        }   
        
    }
  // cout<<c<<" ";
    c+=v[i].size()-k1;
    c+=v[j].size()-k2;
    
    if(c==k)
    return 1;
    else
    return 0;
}
 
int main() {
	// your code goes here
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n,s=0;
	    cin>>n>>k;
	    
	    vector<int> v[2501];
	    
	    for(int i=0;i<n;i++)
	    {
	        int l;
	        cin>>l;
	        
	        int a;
	        
	        for(int j=0;j<l;j++)
	        {   cin>>a;
	            v[i].push_back(a);
	        }
	        sort(v[i].begin(),v[i].end());
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if(uni(v,i,j))
	            s++;
	           
	        }
	    }
	    cout<<s<<endl;
 
	}
	return 0;
}
 
