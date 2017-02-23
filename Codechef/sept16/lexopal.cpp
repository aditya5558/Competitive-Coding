 
#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	char a[100000];
	long int t;
	cin>>t;
	while(t--)
	{       cin>>a;
	        long int n=strlen(a);
	        int f=0,f1=0,k;
	        
	        
	            for(int i=0,j=n-1;i<n/2;i++,j--)
	            {
	                if(a[i]!='.'&& a[j]!='.')
	                {
	                    if(a[i]!=a[j])
	                    {
	                        f=1;
	                        break;
	                    }
	                }
	                else
	                {   
	                    f1=1;
	                    if(a[j]!='.')
	                        a[i]=a[j];
	                    else if(a[i]!='.')
	                        a[j]=a[i];
	                    else
	                    {
	                        a[i]='a';
	                        a[j]='a';
	                    }
	                }
	            }
	            if(a[n/2]=='.')
	            {
	                a[n/2]='a';
	            }
	            if(f==1)
	            {
	                cout<<"-1"<<endl;
	            }
	            else
	                cout<<a<<endl;
	            
	            
	        
	       
	    
	}
	    
	
	return 0;
}
 
