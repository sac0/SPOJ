#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int k;
	scanf("%d",&k);int s=0;
	for(int i=0;i<k;i++)
	{
		int g;
		scanf("%d",&g);
		if(g>0)
			s=s+g;
	}
	printf("%d",s);
	return 0;
}