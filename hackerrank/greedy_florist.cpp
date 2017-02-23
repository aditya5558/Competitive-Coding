/* Sample program illustrating input/output */
#include<iostream>
#include<algorithm>
using namespace std;
int main(void){

 

//Helpers for input and output

   int n, k;
   cin >> n >> k;
    int c[n];
   for(int i = 0; i < n; i++)
   {
      cin >> c[i];
   }
   int result=0;
    
    
    if(k>=n)
    {    for(int i=0;i<n;i++)
        result+=c[i];
    }
    else
        
   {    sort(c,c+n);
        reverse(c,c+n);
        int j=1,x=0;
        for(int i=0;i<n;i++)
        {       
                if(j>k)
                 {   x++;
                     j=1;
                 }
                  result+= x*c[i]+c[i];
                j++;
            
        }
   
   }
    
    cout << result << "\n";
   
   return 0;
}
