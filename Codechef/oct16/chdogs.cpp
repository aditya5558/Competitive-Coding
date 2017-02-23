#include <iostream>
#include<stdio.h>
using namespace std;
 
int main() {
	// your code goes here
	long int t,s,v;
	cin>>t;
	while(t--)
	{
	    cin>>s>>v;
	    long double a=((2)*((long double)(s)/v))/3;
	   // if(a<0)
	    //printf("0\n");
	    //else
	    printf("%llf\n",a);
	}
	return 0;
}
 
