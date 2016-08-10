#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int t,x,f,count=0;
    scanf("%d",&t);
    static int a[10001];
    for(int i=0;i<t;i++)
    {
        scanf("%d",&f);
        a[f]=1;
        scanf("%d",&x);
        for (int j = 0; j < x; ++j)
        {
            scanf("%d",&f);
            if(a[f]==0)
                a[f]=2;
        }
    }
    for(int i=0;i<10000;i++)
        if(a[i]==2)
            count++;
    printf("%d\n",count);
	return 0;
}
