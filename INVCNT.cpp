#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
long long int count(vector<long int> &a, long int s, long int e)
{
	long long int inversion = 0;
	long int mid = (s+e)/2;
	long int *temp = new long int[e-s+1];
	long int i=s,j=mid+1;
	for(long int c=0;c<=(e-s);c++)
	{
		if(i>mid)
		{
			temp[c] = a[j++];
		}
		else if(j>e)
		{
			temp[c] = a[i++];
		}
		else if(a[i]<=a[j])
		{
			temp[c] = a[i++];
		}
		else
		{
			temp[c] = a[j++];
			inversion = inversion + mid - i+1;
		}
	}
	long int c = 0;
	for(long int i=s;i<=e;i++)
	{
		a[i] = temp[c++];
	}
	return inversion;
}

long long int inversions(vector<long int> &a, long int s, long int e)
{
	if(s<e)
	{
		long int mid = (s+e)/2;
		return inversions(a,s,mid) + inversions(a,mid+1,e) + count(a,s,e);
	}
	return 0;
}

int main()
{
	int t;
	long int n;
	scanf("%d",&t);
	while( t-- )
	{
		scanf("%ld",&n);
		vector<long int> v(n);
		for(long int i=0;i<n;i++)
		{
			scanf("%ld",&v[i]);
		}
		printf("%lld\n",inversions(v,0,n-1));
	}
	return 0;
}