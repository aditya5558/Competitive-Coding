#include <iostream>
using namespace std;
 
long long int fact[1000000],m=1000000007,n;
 
 
void fac()
{
    long long i;
      fact[0]=1;
    for(i=1;i<=n;i++)
        fact[i]=((fact[i-1]%m)*(i%m))%m;
    
}
 
long long power(long long a,long long b)
{
            if(b==0) 
                return 1;
    else
    {
    
            long long x=power(a,b/2);
            if(b%2==0)
                return ((x%m)*(x%m))%m;
            else
                return (((x%m)*(x%m))%m*(a%m));
    }
}
 
long long comb(long long  n1,long long r)
{
    if(r>n)
        return 0;
    else if(r==n1)
        return 1;
    else
        
    {
        //fac(n);
        long long  a=power(fact[r],m-2)%m; 
        long long  b=power(fact[n1-r],m-2)%m;
      //  cout<<a<<" "<<b<<" "<<fact[n1]<<endl;
        return ((fact[n1]*a%m)*(b%m))%m;
    }
}
 
 
 
 
int main() {
	// your code goes here
	long long x;
	cin>>n;
	if(n<13)
	    cout<<"0";
	else if(n%2==0)
	{   fac();
	    long long y=n/2;
	    x=comb(y-1,6);
	    cout<<x;
	}
	else
	{   fac();
	    long long y=(n/2)+1;
	    x=comb(y-1,6);
	    cout<<x;
 
	}
	//cout<<x;
	
	return 0;
}
 
 
 
