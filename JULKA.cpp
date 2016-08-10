#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

const int s = 102;

void nit(int *a)
{
	for(int i=0;i<s;i++)
	{
		a[i] = 0;		
	}
}

void add(int *a, char * b)
{
	int i=0;
	for(int j=strlen(b)-1;j>=0;j--)
	{
		a[i++] = int(b[j]) - 48;
	}
}

void add(int *a, int *b)
{
	for(int i=0;i<s-1;i++)
	{
		a[i] = a[i] + b[i];
		a[i+1] += a[i] / 10;
		a[i] = a[i] % 10;	
	}
}

void divide(int *a, int b)
{
	for(int i=s-1;i>0;i--)
	{
		a[i-1] += (10*(a[i] % b));
		a[i] = a[i] / b;
	}
	a[0] = a[0]/b;
}

void sub(int *a, int *b)
{
	for(int i=0;i<s-1;i++)
	{
		if(a[i] >= b[i])
			a[i] = a[i] - b[i];
		else
		{
			a[i+1]--;
			a[i] = 10+a[i];
			a[i] -= b[i];
		}	
	}
}

void print(int *a)
{
	int i = s-1;
	while(a[i]==0)
	{
		i--;
	}
	while(i>=0)
	{
		printf("%d",a[i]);
		i--;
	}
	printf("\n");
}

int main()
{
	int apples[s];
	int extra[s];
	char str[s];
	int t = 10;

	while( t-- )
	{
		nit(apples);
		nit(extra);
	
		scanf("%s",&str);
		add(apples, str);
		scanf("%s",&str);
		add(extra, str);
		add(apples, extra);
		divide(apples, 2);
		print(apples);
		sub(apples, extra);
		print(apples);
	}
	return 0;
}