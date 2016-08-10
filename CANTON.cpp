#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

	int t;
	scanf("%d",&t);
	long int a;

	while( t-- )
	{
		scanf("%ld",&a);
		long int cut = 0;
		int den = 1;
		int num = 1;

		while( 1 )
		{
			den = 1;
			while( num > 0 )
			{
				cut++;
				if(cut == a)
				{
					printf("TERM %ld IS %d/%d\n",a,num,den);
					break;
				}
				num--;
				den++;
			}
			if(cut == a)
			{
				break;
			}
			num = 1;
			while( den > 0 )
			{
				cut++;
				if(cut == a)
				{
					printf("TERM %ld IS %d/%d\n",a,num,den);
					break;
				}
				den--;
				num++;
			}
			if(cut == a)
			{
				break;
			}
		}
	}

}