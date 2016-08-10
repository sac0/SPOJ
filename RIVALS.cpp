#include <iostream>
#include <cstdio>
using namespace std;
long long int choose( long long int n,long long int k )
{
	if(n<k)
		return 0;
	if((n-k)<k)
		k=n-k;
	long long int r=1;
	for(long long int i=1;i<=k;i++)
	{
		r=(r*n)/i;
	}
	return r;

}
int main()
{
	long long int t;
	scanf("%lld",&t);
	for(long long int i=1;i<=t;i++)
	{
		long long int a,b,gcd,c;
		scanf("%lld",&a);
		scanf("%lld",&b);
		gcd=choose(a+b,b);
		printf("%lld \n",gcd);
	}
	return 0;
}