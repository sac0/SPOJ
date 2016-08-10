#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
	string s;
	while(1)
	{
		getline(cin,s);
		if(s[0]=='*')
			break;
		int t=s[0];
		char c1,c2;
		if(t<91)
		{
			c1=s[0];
			c2=t+32;
		}
		else
		{
			c1=s[0];
			c2=t-32;
		}
		int flag=1;
		for(int i=1;i<s.size();i++)
		{
			if(s[i]==' ')
			{
				if(s[i+1]!=c1&&s[i+1]!=c2)
				{
					flag=0;
					break;
				}
			}
		}
		if(flag)
			printf("Y\n");
		else
			printf("N\n");

	}
	return 0;
}
