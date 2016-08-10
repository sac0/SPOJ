#include <iostream>
#include <cstdio>
using namespace std;
long long int divisor(long long int num1,long long int num2)
{
	if(num2==0)
		return num1;
	else
		return divisor(num2,(num1%num2));

}
int main()
{
	long long int q=0;
	scanf("%lld",&q);
	long long int n1=1000000;
	int a[n1];
	for(long long int i=0;i<n1;i++)
		a[i]=0;
	while(q)
	{
		q--;
		long long int num=0;
		scanf("lld",&num);
		for(long long int i=1;i<=num;i++)
			for(long long int j=1;j<=num;j++)
			{
				if(a[i]==0||)
			}
	}
}