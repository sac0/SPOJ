#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
long long int Convert(char a[10]) 
{
	long long int k;
	k=((a[0]-48)*100)+((a[1]-48)*10);
	int l=a[3]-49;
	k=k*pow(10,l);
	return k;
}
long long int findlog(long long int num,long long int base)
{
	long long int count =0,num2=num;
	while(num>1)
	{
		num=num/base;
		count++;
	}
	return count;
}
int main()
{
	char a[10];
	while(1)
	{
		scanf("%s",a);
		long long int n=Convert(a);
		if(n==0)
			break;
		long long int logar;
		logar=findlog(n,2);
		n=2*(n-pow(2,logar))+1;
		printf("%lld\n",n);
	}
}
	