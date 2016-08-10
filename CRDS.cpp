#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	long int d=1000007;
	for(int i=0;i<t;i++)
	{
		long long int n;
		scanf("%lld",&n);
		n=(((3*(n+1)*n)/2)%d-(n%d))%d;
		printf("%lld\n",n);
	}
}