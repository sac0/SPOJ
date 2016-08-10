#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

map<long long int, long long int> money;
map<long long int, long long int>::iterator position;

long long int max(long long int a, long long int b)
{
	return (a>b ? a : b);
}

long long int calculate(long long int n)
{
	position = money.find(n);
	if( position != money.end() )
	{
		return position->second;
	}
	else
	{
		long long int t = max(n,calculate(n/2)+calculate(n/3)+calculate(n/4));
		money.insert(std::pair<long long int, long long int>(n,t));
		return t;
	}
}

int main()
{
	long long int n;

	for(int i=0;i<12;i++)
	{
		money.insert(std::pair<long long int, long long int>(i,i));
	}
	money.insert(std::pair<long long int, long long int>(12,13));
	
	while(cin>>n)
	{
		printf("%lld\n",calculate(n));
	}
}