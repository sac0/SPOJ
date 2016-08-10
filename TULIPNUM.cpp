#include <iostream>
#include <cstdio>
using namespace std;
long int find(long int a[1000000],long int item,long int n)
{
	long int beg=0;
	long int end=n-1;
	long int mid=(beg+end)/2;
	while(beg<=end && a[mid]!=item)      
	{
		if(a[mid]<item)
			beg=mid+1;
		else
			end=mid-1;
		mid=(beg+end)/2;
	}
	return mid;
}
int main()
{
	int t;
	scanf("%d",&t);
	for(long int i=1;i<=t;i++)
	{
		long int n,q,index1,index2,x,y;
		scanf("%ld",&n);
		scanf("%ld",&q);
		long int a[n],z,size=1;
		scanf("%ld",&a[0]);
		for(long int j=1;j<n;j++)
		{
			scanf("%ld",&z);
			if(a[size-1]!=z)
				a[size++]=z;
		}
		printf("Case %ld:\n",i);
		for(long int j=0;j<q;j++)
		{
			scanf("%ld",&x);
			scanf("%ld",&y);
			index1=find(a,x,size);
			index2=find(a,y,size);
//			cout<<index1<<index2<<size;
			index2=index2-index1;
//			cout<<"i"<<index2<<a[index1];
			if(a[index1]==x)
				index2++;
			printf("%ld\n",index2);
		}
	}
	return 0;
}