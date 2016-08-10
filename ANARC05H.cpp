#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
long long int sum(int *a,long long int s,long long int e)
{
	long long int s1=0;
	for(long long int i=s;i<=e;i++)
		s1=s1+a[i];
	return s1;
}
void count(int *a,long long int s,long long int e,long long int &co)
{
	static long long int sum1=0;
	for(long long int i=s;i<e-1;i++)
	{
		long long int sum2=sum(a,s,i);
		long long int sum3=sum(a,i+i,e-1);
		cout<<"sum1="<<sum1<<" sum2="<<sum2<<" sum3="<<sum3;
		if((sum1<=sum2)&&(sum2<=sum3))
		{
				co++;
				sum1=sum(a,s,i);
				cout<<" d "<<endl;
		}
		cout<<endl;
		count(a,i+1,e,co);
	}
}
int main()
{
	int a[1000];long long int n;
	char s[100];long long int er=0;
	while(1)
	{
		er++;
		scanf("%s",&s);
		if(s[0]=='b'&&s[1]=='y'&&s[2]=='e')
			break;
		n=atoi(s);
		long long int size=0;
		while(n>0)
		{
			a[size++]=n%10;
			n=n/10;
		}
		int b[1000];long long int e=0;
		for(long long int i=size-1;i>=0;i--)
		b[e++]=a[i];
		long long int co=0;
		count(b,0,e,co);
		printf("%lld",er);
		printf(". ");
		printf("%lld \n",co);
	}
}
