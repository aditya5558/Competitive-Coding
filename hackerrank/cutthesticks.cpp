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


int main(){
    int n;
    cin >> n;
    int arr[n],min;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    while(n>0)
    {       cout<<n<<endl;
            min=arr[0];
            for(int i=0;i<n-1;i++)
            {       
                    if(min>arr[i+1])
                    min=arr[i+1];
                
            }
       
            for(int i=0;i<n;i++)
            arr[i]=arr[i]-min;
            
            for(int i=0;i<n;i++)
                if(arr[i]<=0)
               { 
                for(int j=i;j<n-1;j++)
                arr[j]=arr[j+1];
                n--;
                i=i-1;
               }
    }
    
    
    return 0;
}
