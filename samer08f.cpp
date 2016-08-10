#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==0)
			break;
		n=(n*(n+1)*(2*n+1));
		n=n/6;
		printf("%d \n",n);
	}
}