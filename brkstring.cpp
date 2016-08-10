#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	long long int len;
	int b;
	long long int first,last,temp;
	while(scanf("%lld",&len)!=EOF)
	{
		long long int rtol=len,ltor=len;
		scanf("%d",&b);
		scanf("%lld",&first);
		ltor=ltor+len-first;
		for(int i=2;i<b;i++)
		{
			scanf("%lld",&temp);
			ltor=ltor+len-temp;
			rtol=rtol+temp;
		}
		scanf("%lld",&last);
		rtol=rtol+last;
		if(rtol<ltor)
		{
			rtol--;
			printf("%lld\n",rtol);
		}
		else
		{
			ltor--;
			printf("%lld\n",ltor);
		}
	}
}