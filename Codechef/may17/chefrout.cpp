#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int f=0,fc=0,fs=0,fe=0;
	    if(s.length()==1)
	        cout<<"yes"<<endl;
	   else
	   {
	    
	    for(int i=0;i<s.length();i++)
	    {
	       if(s[i]=='E' && fs==1)
	       {   f=1;
	           break;
	       } 
	       if(s[i]=='C' && (fs==1 || fe==1))
	       {  f=1;
	           break;
	       }   
	       if(s[i]=='E')
	       fe=1;
	       else if(s[i]=='C')
	       fc=1;
	       else if(s[i]=='S')
	       fs=1;
	       
	        
	    }
	    if(f==1)
	    cout<<"no"<<endl;
	    else
	    cout<<"yes"<<endl;
	   }
	}
	return 0;
}
 
