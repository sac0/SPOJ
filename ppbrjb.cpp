#include <iostream>
#include <stdio.h>
using namespace std;
long long int cal(int num,int num2,int i)
{
	if(num2==0||i==0)
	{
		return 1;
	}
	int k=max(num2,i);
	long long int u=1;
	while(num>k)
	{
		u=u*num;
		num--;
	}
	k=min(num2,i);
	for(int k1=1;i<=k;k1++)
		u=u/k1;
	return u;
}
long long int getpermutations(int n)
{
	int a=n%4;
	int d=n/4;
	long long int count=0;
	for(int i=0;i<=d;i++)
	{
		int num=i+(d-i)*4+a;
		int num2=num-i;
		count=count+cal(num,num2,i);
	}
	return count;
}
int check(long long int y)
{
	for(long long int i=2;i<=y/2;i++)
	{
		if(y%i==0)
			return 0;
	}
	return 1;
}
long long int getprime(long long int y)
{
	if(y==1)
		return 0;
	long long int r=0;
	for(long long int i=2;i<y;i++)
	{
		r=r+check(i);
	}
return r;
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[40]={0,0,0,0,0,1,2,3,4,5,7,8,10,12,16,20,25,32,42,54,69,92,120,155,205,270,355,463,616,817,1078,1433,1912,2544,3386,4523,6049,8079,10795,14476};
	for(int i=0;i<n;i++)
	{
		int g;
		scanf("%d",&g);
//		long long int y=getpermutations(i);
		long long int prime =getprime(g);
		printf("%lld\n",prime);
	}
}