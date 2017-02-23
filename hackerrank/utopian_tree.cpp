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
    int t,h=1;
    cin >> t;
    int a[t];
    for(int i = 0; i < t; i++){
       
        cin >> a[i];
    }
    for(int i=0;i<t;i++)
        {       h=1;
            for(int j=0;j<a[i];j++)
            {     if(j%2==0) 
                    h*=2;
                    else
                    h+=1;    
                        
                    }
        cout<<h<<endl;}
    
    
    return 0;
}
