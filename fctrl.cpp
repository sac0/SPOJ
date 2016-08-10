#include <iostream>
#include <cstdio>
using namespace std;
long long int get(long long int a)
{
	int f=0;
	long long int h=a;
	int z=5;
	while(1)
	{
		f=f+(h/z);
		z=z*5;
		if(z>a)
		break;
	}
	return f;
}
int main()
{
	long long int a;long long int flag=0;
	long int n;
	scanf("%ld",&n);
	for(long int i=0;i<n;i++)
	{
		scanf("%lld",&a);
		flag=get(a);
		printf("%lld \n",flag);
	}
	return 0;
}
