#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
void mark(int a[2501], int i, int n)
{
	 int k=2;
	while(i*k<=n)
	{
		a[i*k]=1;
		k++;
	}
}

int main()
{
	static int a[2501];
	int n=2500;
	for( int i=2;i<sqrt(n);i++)
	{
		if(a[i]==0)
			mark(a,i,n);
	}
	int t,x,y;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>x>>y;
		x=x+y;
		for(int j=x+1;j<2500;j++)
		{
			if(a[j]==0)
			{
				cout<<j-x<<endl;
				break;
			}
		}
	}
}