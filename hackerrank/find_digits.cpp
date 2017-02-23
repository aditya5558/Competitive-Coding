#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()  
{
    int t,k=0;
    cin >> t;
    int a[t];
    for(int j = 0; j< t; j++)
    {
        
        cin >> a[j];
    }
        
    
    int arr[100000] ;
    for(int q=0;q<t;q++)
    {   int p=a[q];
        for(int j=0;j<a[q];j++)
     {  int i = 0;
            k=0;
        while ( a[q] != 0) 
        {
                arr[i] = a[q]%10;
                a[q] /= 10;
                i++;
        }
        for(int w=0;w<i;w++)
            {       if(arr[w]!=0)
            {if(p%arr[w]==0)
                k++;}
             
             }
        cout<<k<<endl;
        
     }
    }
    
    return 0;
}
