#include <iostream>
#include <cstdio>
using namespace std;
int main()
{

	long long int fact[14]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800};
	int n;
	while(cin>>n)
	{
		int num,no;
		scanf("%d",&num);
		long long int temp=1;
		long long int ans=fact[n];
		for(int i=0;i<num;i++)
		{
			scanf("%d",&no);
			temp=temp*fact[no];
		}
		ans=ans/temp;
		printf("%lld\n",ans);
	}
}