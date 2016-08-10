#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
void mark(int a[100000000],long long int i,long long int n)
{
	long long int k=2;
	while(i*k<=n)
	{
		a[i*k]=1;
		k++;
	}
}
long long int getprime(int a[100000000],long long int n1,long long int n)
{
	long long int count=0;
	for(long long int i=2;i<n;i++)
	{
		if(a[i]==0)
			count++;
		if(count==n1)
			return i;
	}
}
int main()
{
	static int a[100000000];
	long long int count=1;
	long long int n=100000000;
	for(long long int i=2;i<sqrt(n);i++)
	{
		if(a[i]==0)
			mark(a,i,n);
	}
	while(1)
	{
		long long int n1;
		scanf("%lld",&n1);
		n1=getprime(a,n1,n);
		printf("%lld\n",n1);
	}
}