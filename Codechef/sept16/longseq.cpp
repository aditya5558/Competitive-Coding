#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	char a[100000];
	long int t;
	cin>>t;
	while(t--)
	{
	    cin>>a;
	    long int c1=0,c2=0,f=0;
	    if(strlen(a)==1)
	        cout<<"Yes"<<endl;
	    else
	    {
	        long int n=strlen(a);
	        for(int i=0;i<n;i++)
	        {
	            if(a[i]=='0')
	                c1++;
	            else
	                c2++;
	            if(c1>1 && c2>1)
	             {
	                 f=1;
	                 break;
	             }   
	        }
	        if(f==0 && (c1==1 ||c2==1))
	            cout<<"Yes"<<endl;
	        else
	            cout<<"No"<<endl;
	    }
	    
	}
	return 0;
}
