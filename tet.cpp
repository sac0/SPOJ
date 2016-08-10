#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
void printnum(string str,string s)
{
	int k=1;
	string f=str;
	int count=0;
	while(k)
	{
		k=f.find(s);
		cout<k;
		if(k!=-1)
		{
			count++;
			int l=f.length();
			f=f.substr(k,l-k);
		}
		cout<<"l";
	}
	printf("%d",count);
	printf(" ");
}
int main()
{
	int k;
	scanf("%d",&k);
	string s[8];
	s[0]="TTT";
	s[1]="TTH";
	s[2]="THT";
	s[3]="THH";
	s[4]="HTT";
	s[5]="HTH";
	s[6]="HHT";
	s[7]="HHH";
	for(int i=0;i<k;i++)
	{
		string str;
		scanf("%s",str);
		cout<<"l";
		for(int d=0;d<8;d++)
			printnum(str,s[d]);
	}
	return 0;
}