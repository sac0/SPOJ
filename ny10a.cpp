#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
void printnum(string str,string s)
{
	int k=1;
	string f=str;
	int count=0;
	while(1)
	{
		k=f.find(s);
		if(k!=-1)
		{
			count++;
			int l=f.length();
			f=f.substr(k+1,l-k);
		}
		else
			break;
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
	int g;
	for(int i=0;i<k;i++)
	{
		string str;
		scanf("%d",&g);
		printf("%d",g);
		printf(" ");
		cin.ignore();
		getline(cin,str);
		for(int d=0;d<8;d++)
		{	
			printnum(str,s[d]);
		}
		printf("\n");
	}
	return 0;
}