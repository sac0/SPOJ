#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b,c;
	while(1)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
		if(a==0&&(b==0&&c==0))
			break;
		int c1=b-a;
		int c2=c-b;
		if(c1==c2)
		{
			c1=c+c1;
			printf("AP ");
			printf("%d \n",c1);
			continue;
		}	
		c1=b/a;
		if(c1==(c/b));
		{
			printf("GP ");
			c1=c*c1;
			printf("%d \n",c1);
			continue;
		}

	}
	return 0;
}