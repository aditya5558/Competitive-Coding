#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	// your code goes here
    int n,n1,a[10000],t,m,m1,c,k,t1;
    scanf("%d",&t1);
    while(t1>0)
    {
    scanf("%d",&n);
    n1=n;
    int j=0;
    while(n1)
        {   a[j++]=n1%10;
            n1/=10;
        }
    m1=j;
    
    for(int i=n-1;i>1;i--)
    {   t=m=0;
 
        c=m1;
        m1=0;
        for( k=0;k<c;k++)
        {   int a1=a[k]*i+t;
            a[k]=a1%10;
            t=a1/10;
            m++;
            m1++;
            
        }
        while(t)
        {   a[k++]=t%10;
            t/=10;
            m++;
            m1++;
        }
    }
    if(n<=1)
    printf("1\n");
    else
    {
        for(int i=m-1;i>=0;i--)
        printf("%d",a[i]);
        printf("\n");
    }
    t1--;
    
    }
	
	
	return 0;
}
