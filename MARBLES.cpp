#include <iostream>
#include <cstdio>
using namespace std;

void multiply(int *d, long int n)
{
	int carry = 0;
	for(int i=0;i<199;i++)
	{
		d[i] = carry + (d[i]*n);
		carry = d[i] / 10;
		d[i] = d[i] % 10;
	}
}

void divide(int *d, long int n)
{
	int rem = 0;
	for(int i=199;i>=0;i--)
	{
		d[i] = d[i] + 10*rem;
		rem = d[i] % n;
		d[i] = d[i] / n;
	}
}

void display(int *a)
{
	int i=199;
	while(a[i]==0)
		i--;
	while(i>=0)
	{
		printf("%d",a[i]);
		i--;
	}
	printf("\n");
}

void compute(long int n, long int r)
{
	r = ( r > (n-r) ) ? n-r : r;
	int d[200];
	for(int i=1;i<200;i++)
	{
		d[i] = 0;
	}
	d[0] = 1;
	for(long int i=0;i<r;i++)
	{
		multiply(d,n-i);
	}
	for(long int i=r;i>=2;i--)
	{
		divide(d,i);
	}
	display(d);
}

int main()
{
	int t;
	long int k, n;
	scanf("%d",&t);
	while( t-- )
	{
		scanf("%ld",&n);
		scanf("%ld",&k);
		if( n == k )
			printf("1\n");
		else
		{
			n = n-k;
			compute(n+k-1,n);
		}
	}
	return 0;
}