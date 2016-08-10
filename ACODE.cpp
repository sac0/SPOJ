#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;

typedef unsigned long long int lli;

map<int,lli> m;
map<int,lli>::iterator i;

int check(char a, char b)
{
	int p = int(a-'0')*10 + int(b-'0');
	if(p<27)
		return 1;
	return 0;
}

lli cot(char c[], int s, int e)
{
	if(c[s]=='0')
		return 0;
	if(s==e)
		return 1;
	else if((e-s)==1)
		return cot(c,s+1,e)+check(c[s],c[e]);		
	else
	{
		i = m.find(s);
		if( i==m.end() )
		{
			lli temp = cot(c,s+1,e)+check(c[s],c[s+1])*cot(c,s+2,e);
			m.insert(std::pair<int,lli>(s,temp));
			return temp;
		}
		return i->second;
	}
}

int main()
{
	char code[5002];
	while(1)
	{
		scanf("%s",&code);
		if(code[0]=='0')
			return 0;
		m.clear();
		printf("%llu\n",cot(code,0,strlen(code)-1));
	}
} 