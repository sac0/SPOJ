#include <iostream>
#include <cstdio>
using namespace std;

typedef long long L;

int main()
{
	int t;
	cin>>t;
	L x,y,s,a,d,n;
	while( t-- )
	{
		scanf("%lld",&x);
		scanf("%lld",&y);
		scanf("%lld",&s);

		n = 2*s/(x+y);
		d = (y-x)/(n-5);
		a = x-2*d;

		cout<<n<<endl;
		for (int i = 0; i < n; ++i)
		{
			printf("%lld ",a+i*d);
		}
		cout<<endl;
	}
}