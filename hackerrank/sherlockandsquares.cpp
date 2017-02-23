#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{   int t,a,b;
    scanf("%d",&t);
        while(t--)
        {    scanf("%d %d",&a,&b);
            printf("%d\n",(int)(floor(sqrt(b))-ceil(sqrt(a))+1));
         

        }
}
