#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
	int t,person,groups=0;
	static int a[30000];
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&person);
		person--;
		a[person]=1;
		if(person==0)
		{
			if(a[1]==0)
				groups++;
		}
		else
		{
			if(a[person-1]==0&&a[person+1]==0)
				groups++;
			if(a[person-1]==1&&a[person+1]==1)
				groups--;
		}
		printf("%d\n",groups);
	}
	printf("Justice\n");
	return 0;
}