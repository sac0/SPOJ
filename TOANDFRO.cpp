#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

int main()
{

	int n,size=0;
	char cod[201];
	vector<vector <char> > v;

	while( 1 )
	{
		v.clear();
		scanf("%d",&n);
		size =0;

		if(!n)
			return 0;

		scanf("%s",cod);
		
		int l = strlen(cod);
		int index = 0;
		
		for(int i=0;index<l;i++)
		{
			
			v.push_back( vector<char>(n) );
			size++;

			int j = (i&1) ? n-1 : 0;
			int c = (i&1) ? -1 : 1;

			for(; (j < n && j >= 0);j = j+c)
			{
				v[i][j] = cod[index++];
			}
		}

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<size;j++)
			{
				printf("%c",v[j][i]);
			}
		}
		printf("\n");
	}
}