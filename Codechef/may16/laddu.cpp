#include <bits/stdc++.h>
 
int main() 
{       
	// your code goes here
	int t,r,s,c=0;
	long int l=0;
	scanf("%d",&t);
	while(t--)
	{   int n;
	    
	    l=0;
	    char a[50],b[50];
	    scanf("%d %s",&n,a);
	    for(int i=0;i<n;i++)
	    {   scanf("%s",b);
	        if(strcmp(b,"CONTEST_WON")==0)
	        {   scanf("%d",&r);
	            if(r<20)
                l+=300+20-r;
                else
                l+=300;
	        }
            
            else if(strcmp(b,"BUG_FOUND")==0)	    
            {    scanf("%d",&s);
	                l+=s;
            }
            else if(strcmp(b,"TOP_CONTRIBUTOR")==0)
            l+=300;
            else
            l+=50;
                
        }
        if(strcmp(a,"INDIAN")==0)
                   c=l/200;      
	    else
	                c=l/400;
	   printf("%d\n",c);
	}
	    
	return 0;
}
