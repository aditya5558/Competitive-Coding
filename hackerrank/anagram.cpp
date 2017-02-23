#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long t,n;
    cin>>t;
    while(t--)
        {       int c=0;
                char a[10000];
                cin>>a;
                n=strlen(a);
                if(n%2!=0)
                    cout<<"-1"<<endl;
                
         
               else  
               {         for (int i = 'a'; i <= 'z'; ++i) 
                        {
                            int x = 0, y = 0;
                            for (int j = 0; j < n/2; ++j)
                                if (a[j] == i) 
                                    x++;
                            for (int j =n/2 ; j < n; ++j)
                                if (a[j] == i) 
                                    y++;
                            c += abs(x - y);
                        }
                        cout<<c/2<<endl;
               }
        }
    return 0;
}
