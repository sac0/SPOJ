#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t, n;
	vector<int> m;
	vector<int> w;

	scanf("%d",&t);

	while( t-- )
	{
		m.clear();
		w.clear();

		scanf("%d",&n);
		m.resize(n);
		w.resize(n);

		for(int i=0;i<n;i++)
		{
			scanf("%d",&m[i]);
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d",&w[i]);
		}

		sort(m.begin(),m.end());
		sort(w.begin(),w.end());
		
		int hotness = 0	;

		for(int i=0;i<n;i++)
		{
			hotness = hotness + (m[i]*w[i]);
		}

		printf("%d\n",hotness);
	}
}