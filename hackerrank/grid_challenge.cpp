#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {           char a[100][100];
                int n;
                cin>>n;
                int flag=0;
                for(int i=0;i<n;i++)
                {    for(int j=0;j<n;j++)
                            cin>>a[i][j];
                    
                        sort(a[i],a[i]+n);
                 }
                for(int j=0;j<n;j++)
                {    for(int i=0;i<n-1;i++)
                        if(a[i][j]>a[i+1][j])
                        {
                            flag=1;
                            break;
                        }
                        if(flag==1)
                               break;
                    
                }
                        
                if(flag==1)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
        
        
        
    }
    
    return 0;
}
