#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
	int temp;
	while(1)
	{
		scanf("%d",&temp);
		if(temp==0)
			return 0;
		printf("%.2f\n",((temp*temp/2.0)/M_PI));
	}
}