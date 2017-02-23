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
    int t;
    char a[100005];
    cin>>t;
    while(t--)
    {       cin>>a;
            int f1;
            int n=strlen(a);
            for(int i=0,j=n-1;i<n/2;i++,j--)
             {   int flag=0;
                f1=0; 
                if(a[i]!=a[j])
                {       f1=1;
                        for(int k=i,m=j-1;k<(j+i)/2;k++,m--)
                           {    if(a[k]!=a[m])
                                {   flag=1;
                                    break;}
                           }
                        if(flag==1)
                        {    cout<<i<<endl;
                                break;}
                        else
                        {    cout<<j<<endl;
                             break;}
                }
             }
            if(f1==0)
                cout<<"-1"<<endl;
    }
                 
                 return 0;
}
