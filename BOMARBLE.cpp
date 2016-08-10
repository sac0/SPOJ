#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		n++;
		long long int k=(3*n*n)-n;
		k=k/2;
		printf("%lld\n",k);
	}
}
