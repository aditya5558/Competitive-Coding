#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k,t;
    cin>>t;
    while(t>0)
        {   cin>>n>>k;
            int c=0;
            int a[n];
            for(int i=0;i<n;i++)
             {   cin>>a[i];
                if(a[i]<=0)
                {c++;}
             }
         
        
    
  if(c<k)
      cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
      
         t--;
        }
    return 0;
}
