#include <iostream>
#include <cstdio>
using namespace std;
bool prime(long long int a)
{
	long long a1=a/2;
	bool t=true;
	for(long long int i=2;i<=a1;i++)
	{
		if(a%i==0)
		{
			t=false;
			break;
		}
	}
	if(t&&a>1)
	printf("%lld \n",a);
	return(t&&a>1);	
}
int main()
{
	long long int a;long long int f=0;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a);
		scanf("%lld",&f);
		long long int count =0;
		for(long long int k=a;k<=f;k++)
		{
			bool j=prime(k);
			if(j)
			count++;
		}
		if(count>0)
		printf("\n");
	}
	return 0;
}
