#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    long int t,n;
    
    cin>>t;
    while(t--)
        {           int c=0;
                    cin>>n;
                    
                    long int a[n],b[n];
                    for(int i=0;i<n;i++)
                        cin>>a[i];
                    if(n==1)
                    {    cout<<"YES"<<endl;
                        continue;
                    }
                    
                    b[0]=a[0];
                    for(int i=1;i<n;i++)
                        
                        b[i]=b[i-1]+a[i];
                    
                    for(int j=1;j<n;j++)
                   {     if(b[j-1]==(b[n-1]-b[j]))
                                c=1;
                   }
                        
        
                        if(c==1)
                            cout<<"YES"<<endl;
                        else
                            cout<<"NO"<<endl;
        }
    return 0;
}
