#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	long long int t, k, i;

	scanf("%lld",&t);

	while( t-- )
	{
		scanf("%lld",&k);
		i = 192 + (k-1)*250;
		printf("%lld\n",i);
	}
}	