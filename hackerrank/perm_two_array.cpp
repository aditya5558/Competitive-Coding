#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long int t,n,k;
    cin>>t;
    while(t--)
    {
            cin>>n>>k;
            int f=0;
            long int a[n],b[n];
            for(int i=0;i<n;i++)
                cin>>a[i];
            for(int i=0;i<n;i++)
                cin>>b[i];
        
            sort(a,a+n);
            sort(b,b+n);
            reverse(b,b+n);
            
            for(int j=0;j<n;j++)
                if(a[j]+b[j]<k)
                   { f=1;
                    break;
                   }
        
            if(f==1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
    }
    return 0;
}
