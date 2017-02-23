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
        {       char r[10000],s[10000];
                int c=0;
                
                cin>>r;
                n=strlen(r);
                for(int i=0,j=n-1;i<n;i++,j--)
                    s[i]=r[j];                    
                for(int i=1;i<n;i++)
                {    if(abs((int(s[i])-int(s[i-1])))!=abs(((int(r[i]-int(r[i-1]))))))
                    {       c=1;
                            cout<<"Not Funny"<<endl;
                            break;
                    }
                }
                       
                if(c!=1)
                       cout<<"Funny"<<endl;
            
        }
    return 0;
}
