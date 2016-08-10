# include <iostream>
# include <cstring>
# include <cstdio>
using namespace std;
char one;char two;
void checkdel(char s[100000],long int j,long int k,bool &d1,bool &d2)
{
	if(j==0)
	{
		if(s[1]==s[0])
			d1=true;
		else
			d1=false;
	}
	else
	{
		if(s[j]==one||s[j]==s[j+1])
			d1=true;
		else
			d1=false;
	}
	if(k==(strlen(s)-1))
	{
		if(s[k]==s[k-1])
			d2=true;
		else
			d2=false;
	}
	else
	{
		if(s[k]==two||s[k]==s[k-1])
		d2=true;
		else
		d2=false;
	}

}
int check(char s[100000],long int &j,long int &k)
{
	bool d1,d2;
	checkdel(s,j,k,d1,d2);
	if(d1&&d2)
	{
		if(s[j+1]==s[k-1])
		{
			s[j++]='.';
			s[k--]='.';
			return 1;
		}
		if(s[k]==s[j+1])
		{
			s[j++]='.';
			return 1;
		}
		if(s[j]==s[k-1])
		{
			s[k--]='.';
			return 1;
		}
	}
	else
	{
			if(d1)
			{
				s[j++]='.';
				return 1;
			}
			if(d2)
			{
				s[k--]='.';
				return 1;
			}

	}

	return -1;
}
int main()
{
	long int j,k;
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		j=0;
		char s[100000];
		scanf("%s",s);
		k=strlen(s)-1;
		int flag=1;
		one='.';
		two=one;
		while(j<=k)
		{

			if(s[j]==s[k])
			{
				one=s[j++];
				two=s[k--];
			}
			else
			{
				int get=check(s,j,k);
				if(get==-1)
					{
						printf("NO\n");
						flag=0;
						break;	
					}
			}
		}
		if(flag)
			printf("YES\n");			
	}
}