#include <iostream>
#include <cstdio>
using namespace std;
typedef unsigned long long int lli;

bool willitst(lli n)
{
	while( n>0 )
	{
		if(n == 1)
			return true;
		if(n&1)
			return false;
		n = n>>1;
	}
	return false;
}

int main()
{
	lli n;
	cin>>n;
	if(willitst(n))
		printf("TAK\n");
	else
		printf("NIE\n");
}