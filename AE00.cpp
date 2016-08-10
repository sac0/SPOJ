#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int n;
	long int r = 0;
	scanf("%d",&n);

	for(int i=1;i<=sqrt(n);i++)
	{
		r += (n/i) - (i-1);
	}
	printf("%ld\n",r);
	
}