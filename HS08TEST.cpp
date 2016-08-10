#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int amt;
	float bal;
	scanf("%d",&amt);
	scanf("%f",&bal);

	if(! (amt%5) )
	{
		if( amt+0.5 <= bal )
			bal -= (amt+0.5);
	}
	printf("%.2f",bal);
	return 0;
}