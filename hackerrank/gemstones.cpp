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
    
    int n;
    cin>>n;
    char a[100000][100];
    for(int i=0;i<n;i++)
        cin>>a[i];
     
    int c=0;
    char ch='a';
    for(int i=0;i<26;i++)
        {       int f=0;
                for(int j=0;j<n;j++)
                {   if(strchr(a[j],ch)==NULL)
                     {      f=1;
                            break;
                     }     
                }  
                if(f!=1)
                    c++;
                ch++;
        }
    
    cout<<c;
    
    
    return 0;
}
