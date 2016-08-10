#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int count01=0;
    int count00=0;
    char a[101];
    scanf("%s",a);
    for(int i=0;i<strlen(a)-1;i++)
    {
        if(a[i]=='0')
        {
            if(a[i+1]=='0')
                count00++;
            if(a[i+1]=='1')
                count01++;            
        }
    }
    if(a[strlen(a)-1]=='0')
    {
        if(a[0]=='0')
            count00++;
       if(a[0]=='1')
            count01++;            
    }
    if(count01==0)
        printf("EQUAL\n");
    else
    {
        if(count01>count00)
            printf("ROTATE\n");
        if(count01<count00)
            printf("SHOOT\n");
        if(count00==count01)
            printf("EQUAL\n");
    }
	return 0;
}
