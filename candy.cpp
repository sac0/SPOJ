#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==-1)
			break;
		int a[n];int s=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			s=s+a[i];
		}
		if(s%n!=0)
		{
			printf("-1\n");
		}
		else
		{
			s=s/n;
			int sum=0;
			for(int i=0;i<n;i++)
			{
				if(a[i]>s)
					sum=sum+a[i]-s;
			}	
			printf("%d \n",sum);
		}
	}

	return 0;
}