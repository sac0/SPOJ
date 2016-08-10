#include <iostream>
#include <cstdio>
using namespace std;
void fact(int h,int *a,int &s)
{
	while(h>1)
	{
		int c=0;
		for(int i=0;i<s;i++)
		{
			int u=((a[i]*h)+c)%10;
			c=((a[i]*h)+c)/10;
			a[i]=u;
		}
		h--;
		while(c>0)
		{
			a[s++]=c%10;
			c=c/10;
		}
	}
}
void init(int *a,int &s)
{
	for(int i=0;i<200;i++)
	{
		a[i]=0;
	}
	a[0]=1;
	s=1;
}
int main()
{
	int n;int h;
	scanf("%d",&n);int a[200];int s;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&h);
		init(a,s);
		fact(h,a,s);
		for(int i=s-1;i>=0;i--)
		printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}
