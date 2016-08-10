#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int t, a, b;
	scanf("%d",&t);
	while( t-- )
	{

		scanf("%d",&a);
		scanf("%d",&b);

		if(a==b)
		{
			if(a&1)
			{
				printf("%d\n",2*a-1);
			}
			else
			{
				printf("%d\n",2*a);
			}
		}
		else if((b+2) == a)
		{
			if(a&1)
				printf("%d\n",a+b-1);
			else
				printf("%d\n",a+b);
		}
		else
		{
			printf("No Number\n");
		}
	}
	return 0;
}