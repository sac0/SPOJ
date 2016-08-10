#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	long long int t,n,a;

	scanf("%lld",&t);

	while ( t-- )
	{
		scanf("%lld",&n);
		long long int s = 0;
		for(long long int i=0;i<n;i++)
		{
			scanf("%lld",&a);
			s = ((s%n) + (a%n))%n;
		}
		if(s == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}