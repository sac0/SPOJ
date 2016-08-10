#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int t;
    char a[1000];
	scanf("%d",&t);
    int lastdig[10][4]={{0,0,0,0},{1,1,1,1},{6,2,4,8},{1,3,9,7},{6,4,6,4},{5,5,5,5},{6,6,6,6},{1,7,9,3},{6,8,4,2},{1,9,1,9}};
    for(int i=0;i<t;i++)
    {
        long long int b;
        scanf("%s",a);
        scanf("%lld",&b);
        int a1=a[strlen(a)-1]-48;
        if(b==0)
            printf("1\n");
        else
        {
            b=b%4;
            printf("%d\n",lastdig[a1][b]);
        }
    }
	return 0;
}
