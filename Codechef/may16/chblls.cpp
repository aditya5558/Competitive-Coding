#include <bits/stdc++.h>
 
int main() 
{       int n;
        
               printf("1\n");
                printf("3 1 2 5\n");
                printf("0\n");
                fflush(stdout);
                scanf("%d",&n);
                if(n==3)
                {   printf("1\n1 3\n0\n");
                    fflush(stdout);
                    scanf("%d",&n);
                    if(n==2)
                    printf("2\n3");
                    else
                    printf("2\n4");
                }
                else
                {   printf("1\n1 1\n1 2\n");
                     fflush(stdout);
                     scanf("%d",&n);
                     if(n==0)
                     printf("2\n5");
                     else if(n==1)
                     printf("2\n1");
                     else
                     printf("2\n2");
                }
                return 0;
        
}	 
