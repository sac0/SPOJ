//1/r = 1/r1 + 1/r2 + 1/r3 + 2*sqrt[1/(r1*r2)+1/(r1*r3)+1/(r2*r3)]
#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	double r1,r2,r3,r,sq;
	for(int i=0;i<t;i++)
	{
		scanf("%lf",&r1);
		scanf("%lf",&r2);
		scanf("%lf",&r3);
		r1=1/r1;
		r2=1/r2;
		r3=1/r3;
		sq=2*sqrt(r1*r2 +r2*r3 +r3*r1);
		r=r1+r2+r3+sq;
		r=1/r;
		printf("%.6lf\n",r);
	}
	return 0;
}