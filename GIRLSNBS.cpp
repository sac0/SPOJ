#include <iostream>
#include <cstdio>
using namespace std;

int ceil(int x, int y)
{
	if(x%y)
		return (x/y)+1;

	return (x/y);
}

int main()
{
	int x, y;
	while ( 1 )
	{
		scanf("%d",&x);
		scanf("%d",&y);

		if(x==-1)	
			return 0;

		if(x==0)
			printf("%d\n",y);
		else if(y==0)
			printf("%d\n",x);
		else if(x>y)
			printf("%d\n",ceil(x,y+1));
		else
			printf("%d\n",ceil(y,x+1));
	}

}