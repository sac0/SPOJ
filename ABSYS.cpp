#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

void stoc(char c[], int &a, int &check, int x)
{
	int l = strlen(c);
	for(int i=0;i<l;i++)
	{
		if(c[i]>58)
		{
			check = x;
			return;
		}
		a = (a*10) + int(c[i]-'0'); 
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	char s[20];
	int a, b, c;
	int check;

	while( t-- )
	{
		a = b = c = 0;
		scanf("%s",s);
		stoc(s,a, check, 1);
		scanf("%s",s);
		scanf("%s",s);
		stoc(s,b, check, 2);
		scanf("%s",s);
		scanf("%s",s);
		stoc(s,c, check, 3);

		if( check == 1 )
		{
			printf("%d + %d = %d\n",(c-b),b,c);
		}
		else if( check == 2 )
		{
			printf("%d + %d = %d\n",a,(c-a),c);
		}
		else
		{
			printf("%d + %d = %d\n",a,b,a+b);
		}
	}

}