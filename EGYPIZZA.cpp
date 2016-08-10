#include <iostream>
#include <cstdio>
#include <cstring>
#include <math.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	char t[4];double order=1;
	for(int i=0;i<n;i++)
	{
		scanf("%s",t);
		if(t[0]=='3')
		order=order+0.75;
		else
		{
			if(t[2]=='4')
				order=order+0.25;
			if(t[2]=='2')
				order=order+0.5;
		}
	}
	cout<<ceil(order);
	return 0;
}
