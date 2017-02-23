#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int c[10001],d[10001];
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int n1,n2;
    cin>>n1;
    int a[n1];
    for(int i=0;i<n1;i++)
    {    cin>>a[i];
            c[a[i]]++;
    }
    cin>>n2;
    int b[n2];
    for(int i=0;i<n2;i++)
     {  cin>>b[i];
        d[b[i]]++;
     }
    for(int i=0;i<10001;i++)
        {       if(c[i]!=d[i])
                    cout<<i<<" ";
        }
        
       
    
    return 0;
}
