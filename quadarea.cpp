#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	double a,b,c,d;
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%lf",&a);
		scanf("%lf",&b);
		scanf("%lf",&c);
		scanf("%lf",&d);
		double s=(a+b+c+d)/2;
		double area=(s-a)*(s-b)*(s-c)*(s-d);
		area=sqrt(area);
		printf("%.2lf\n",area);
	}
	return 0;
}