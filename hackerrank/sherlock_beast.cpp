#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        cin >> n;
       // char a[100001];
        int z=n;
        if(n%3==0)
        {for(int i=0;i<n;i++)
            cout<<"5";
         cout<<endl;
        }
        else
            {       while(z%3!=0) 
                    {       z-=5;
                            if(z<0)
                             {   cout<<"-1"<<endl;
                                    break;
                             }
                              else if(z%3==0)
                             {   for(int i=0;i<z;i++)
                                    cout<<"5";
                                for(int i=0;i<n-z;i++)
                                    cout<<"3";
                              cout<<endl;
                             }
                    }
            }
    }
    return 0;
}
