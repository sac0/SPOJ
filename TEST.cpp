#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a[1000];int flag=0;
	for(long int i=0;i<1000;i++)
	{
		int n;
		scanf("%ld",&n);
		if(n==42)
			flag=1;
		if(flag==0)
			cout<<n<<endl;	}
	return 0;
}