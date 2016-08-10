#include <iostream>
#include <cstdio>
using namespace std;
long long int gcdr ( long long int a,long long int b )
{
  if ( a==0 ) return b;
  return gcdr ( b%a, a );
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
		scanf("%lld",&c);
		gcd=gcdr(a,b);
		printf("Case %lld: ",i);
		if(c%gcd==0)
			printf("Yes\n");
		else
			printf("No\n");
	}	
	return 0;
}