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
    cin>>t;
    while(t--)
       {        char a[100001],b[100001];
                cin>>a>>b;
                char ch='a';
                int flag=0;
                for(int i=0;i<26;i++)
                  {     if(strchr(a,ch)!=NULL && strchr(b,ch)!=NULL)
                            {       flag=1;
                                    break;
                            }
                        ch++;
                  }
                if(flag==1)
                       cout<<"YES"<<endl;
                else
                        cout<<"NO"<<endl;
       }
    return 0;
}
