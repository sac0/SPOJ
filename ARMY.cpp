#include <cstdint>
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t,ng,nm,a;
	vector<int> g;
	vector<int> m;
	scanf("%d",&t);

	while( t-- )
	{
		g.clear();
		m.clear();
		scanf("%d",&ng);
		scanf("%d",&nm);
		for(int i=0;i<ng;i++)
		{
			scanf("%d",&a);
			g.push_back(a);
		}
		for(int i=0;i<nm;i++)
		{
			scanf("%d",&a);
			m.push_back(a);
		}
		sort(g.begin(),g.end());
		sort(m.begin(),m.end());

		int i=0,j=0;
		while( 1 )
		{
			if( g[i]>=m[j] )
			{
				j++;
			}
			else
			{
				i++;
			}
			if(i == ng)
			{
				printf("MechaGodzilla\n");
				break;				
			}
			if( j== nm )
			{
				printf("Godzilla\n");
				break;				
			}
		}
	}
	uint64_t x;
}