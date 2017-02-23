#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	// your code goes here
	float y;
	int x;
	scanf("%d%f",&x,&y);
	if(x+0.5<=y && x%5==0)
	    y=y-x-0.5;
	printf("%0.2f",y);
	
	
	return 0;
}
 
