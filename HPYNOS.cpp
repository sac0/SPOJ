#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	long long int n;
		static int s[1000];
		scanf("%lld",&n);
		int ans=1;
		int flag=1;
		while(1)
		{
			long long int k=n;
			int sum=0;
			while(k>0)
			{
				int a=k%10;
				k=k/10;
				sum=sum+(a*a);
			}
			if(sum==1)
				break;
			if(s[sum]==1)
			{
				flag=0;
				break;
			}
			s[sum]=1;
			n=sum;
			ans++;
		}
		if(flag)
			printf("%d\n",ans);
		else
			printf("-1\n");
	return 0;
}
