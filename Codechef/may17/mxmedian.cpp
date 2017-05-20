#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t--)
	{
	    long int n,a[100000],b[100000];
	    cin>>n;
	    for(int i=0;i<2*n;i++)
	    cin>>a[i];
	    
	   sort(a,a+2*n);
	   long int j=(2*n-1)-n/2;
	   cout<<a[j]<<endl;
	   
	   memset(b,-1,sizeof(b));
	   long int k=2*n-1;
	   for(int i=2*n-1;i>=j;i--)
	   {
	       
	       b[k]=a[i];
	       k-=2;
	   }
	   k=0;
	   for(int i=0;i<j;i++)
	   {
	       while(b[k]!=-1)
	        k++;
	       b[k++]=a[i];
	   }
      for(int i=0;i<2*n;i++)
	   cout<<b[i]<<" ";
	   cout<<endl;
    }
	   
	return 0;
}
