#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	long int t=0;
	scanf("%ld",&t);
	long long int num;
	for(long int i=1;i<=t;i++)
	{
		scanf("%lld",&num);
		num=sqrt(num+1)-1;
		printf("Case ");
		printf("%ld",i);
		printf(": ");
		printf("%lld\n",num);
	}
}