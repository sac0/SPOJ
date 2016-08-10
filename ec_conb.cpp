#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;
string bin(long long int k)
{
	string s="";
	while(k>0)
	{
		char c=(k%2)+48;
		s=s+c;
		k=k/2;
	}
	return s;
}
long long int get(string s)
{
	long long int num=0;int u=0;
	for(long long int i=s.length()-1;i>=0;i--)
	{
		int z=s[i]-48;
		num=num+z*pow(2,u);
		u++;
	}
	return num;
}
int main()
{
	long long int k;
	scanf("%lld",&k);
	for(long long int i=0;i<k;i++)
	{
		long long int u=0;
		scanf("%lld",&u);
		if(u%2==0)
		{
			string s=bin(u);
			long long int num=get(s);
			printf("%lld \n",num);
		}
		else
			printf("%lld \n",u);

	}

	return 0;
}