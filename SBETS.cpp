#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int c;
	scanf("%d",&c);
	int g1,g2,m[8];
	char n1[4],n2[4],s[8][4];
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<8;j++)
			m[j]=0;
		int count=0;
		for(int j=0;j<16;j++)
		{
			scanf("%s",n1);
			scanf("%s",n2);
			scanf("%d",&g1);
			scanf("%d",&g2);
			int flag=1;
			if(g1>g2)
			{
				for(int k=0;k<count;k++)
				{
					if(strcmp(s[k],n1)==0)
					{
						m[k]++;
						flag=0;
					}
				}
				if(flag)
				{
					strcpy(s[count],n1);
					m[count]++;
					count++;
				}
			}
			else
			{
				for(int k=0;k<count;k++)
				{
					if(strcmp(s[k],n2)==0)
					{
						m[k]++;
						flag=0;
					}
				}
				if(flag)
				{
					strcpy(s[count],n2);
					m[count]++;
					count++;
				}
			}
		}
		int index=0;
		for(int j=0;j<8;j++)
		{
			if(m[j]>m[index])
				index=j;
		}
		printf("%s\n",s[index]);
	}
}

