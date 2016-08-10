#include <iostream>
#include <cstdio>
using namespace std;
long long int find(long long int a[1000000],long long int item,long long int n)
{
	long long int beg=1;
	long long int end=n;
	long long int mid=(beg+end)/2;                       // Find Mid Location of Array
	while(beg<=end && a[mid]!=item)      
	{
		if(a[mid]<item)
			beg=mid+1;
		else
			end=mid-1;
		mid=(beg+end)/2;
	}

	if(a[mid]==item)
		return mid;
	else
		return -1;
}

int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		long long int n,q,index,x,y;
		scanf("%lld",&n);
		scanf("%lld",&q);
		long long int a[n];
		for(long long int j=0;j<n;j++)
			scanf("%lld",&a[i]);
		for(long long int j=0;j<q;j++)
		{
			scanf("%lld",&x);
			scanf("%lld",&y);
			index=find(a,x,n);
			long long int count=1;
			while(a[index]<=n)
			{

			}
		}
		printf("%lld \n",gcd);
	}
	return 0;
}