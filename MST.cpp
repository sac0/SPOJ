#include<iostream>
using namespace std;
void clear(long int *ch,long int n)
{
	for(long int i=0;i<n;i++)
	ch[i]=-1;
}
long int s[100000];
long int find(long int x)
{
	if(s[x]==-1)
		return x;
	else
		return find(s[x]);
}
void u(long int x, long int y)
{
	if(s[x]==-1)
		s[x] = y;
	else if(s[y]==-1)
		s[y] = x;
	else
		u(s[x],y);
}
int main()
{

	long int c=0;
	long int so[100000],d[100000],w[100000];
	long int k;
	scanf("%ld",&k);
	scanf("%ld",&n);
	for(long int i=0;i<n;i++)
	{
		scanf("%ld",&so[c]);
		scanf("%ld",&d[c]);
		scanf("%ld",&w[c]);	
		c++;			
	}
	for(long int i=0;i<c;i++)
	{
		for(long int j=i+1 ;j<c;j++)
		{
			if(w[i]>w[j])
			{
				long int tw=w[i];
				long int td=d[i];
				long int ts=so[i];
				w[i]=w[j];
				so[i]=so[j];
				d[i]=d[j];
				w[j]=tw;
				so[j]=ts;
				d[j]=td;
			}
		}
	}
	clear(s,c);
	long long int sum=0;
	for(long int i=0;i<c;i++)
	{
		if(find(so[i])!=find(d[i]))
		{
			sum=sum+w[i];
			u(so[i],d[i]);
		}
	}	
	printf("%lld",sum);
}