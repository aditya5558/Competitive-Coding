#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int a[1000000];
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int t;
     cin>>t;
    
     long int t1,d,d1[t];
     multimap<long int,long int> m;
     multiset<long int> mymultiset;
     multiset<long int>::iterator it;      
    for(int i=0;i<t;i++)
        {    cin>>t1>>d;
              m.insert ( pair<long int,long int>(t1,d+t1) );
              d1[i]=d+t1;
        }
        
    long int m1=-1;
    for (multimap<long int,long int>::iterator iter = m.begin(); iter!=m.end(); ++iter)
    {
            mymultiset.insert(iter->second);
    }
    for (it=mymultiset.begin(); it!=mymultiset.end(); ++it)
    {       
        for(int i=0;i<t;i++)
        {    if(d1[i]==*it && m1!=i)
               {    m1=i;
                    cout<<i+1<<" ";
                    break;
                }
        }
    }   
    return 0;
}
