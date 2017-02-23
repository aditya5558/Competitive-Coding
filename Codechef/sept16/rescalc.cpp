#include<bits/stdc++.h>
using namespace std;
 
long int m,k1,t1,n;
int c[6];
 
void maxify(int c[],int a[],int k)
{           for(int i=0;i<n;i++)
	        {    c[a[i]-1]++;
	                
	        }
	       // for(int i=0;i<6;i++)
	       // cout<<c[i]<<" ";
	        long int s=0,s1=8;
	        if(n>=4)
	        {
	            while(s1>3)
	            {s1=0;
	                for(int i=0;i<6;i++)
	            {   
	                if(c[i]>0)
	                {//cout<<s1<<" ";
	                    s1++;
	                c[i]--;
	                }
	            }
	            if(s1==6)
	            s+=4;
	            else if(s1==5)
	            s+=2;
	            else if(s1==4)
	            s+=1;
	            }
	            s+=n;
	           // cout<<s<<endl;
	        
	        
	        }
	       else
	       s=n;
	        
	        
	        if(m==s)
	        t1=s;
	        else if(s>m)
	        {
	            k1=k;
	            m=s;
	        }
	        
}
 
 
 
int main() {
	// your code goes here
	char a[100000];
	long int t;
	cin>>t;
	while(t--)
	{       long int n1;
	       
	        cin>>n1;
	        m=-1;
	        int k=0;
	        t1=0;
	      
	        while(n1--)
	       {    int a[10000]; 
	               memset(c,0,6*sizeof(int));
	           cin>>n;
	            for(int i=0;i<n;i++)
	                cin>>a[i];
	           k++;
	           
	           maxify(c,a,k);
	           
	       }
	       if(t1==0)
	       {
	           if(k1==1)
	           cout<<"chef"<<endl;
	           else
	           cout<<k1<<endl;
	       }
	       else if(m>t1)
	       {
	           cout<<k1<<endl;
	           
	       }
	       else
	       cout<<"tie"<<endl;
	       
	  }
	    
	
	return 0;
} 
