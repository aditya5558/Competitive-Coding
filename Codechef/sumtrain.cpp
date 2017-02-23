#include <bits/stdc++.h>
using namespace std;
 
int n;
int dp[100][100];
 
long int sum(int a[][100],int i,int j)
{
    if(i>=n)
    return 0;
    
  //  cout<<dp[i][j]<<" ";
    
    if(dp[i][j]!=0)
    return dp[i][j];
    
    return dp[i][j]=max(a[i][j]+sum(a,i+1,j),a[i][j+1]+sum(a,i+1,j+1));
}
 
 
 
int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{   //int n;
	    cin>>n;
	    int a[100][100];
	    for(int i=0;i<n;i++)
	    for(int j=0;j<=i;j++)
	    cin>>a[i][j];
	    long int s;
	    memset(dp, 0, sizeof(dp[0][0]) * 100 * 100);
	    s=sum(a,0,0);
	   cout<<s<<endl;
	  // cout<<endl;
	}
	return 0;
}
 
