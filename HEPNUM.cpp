#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    int count01=0;
    int count00=0;
    string a,b;
    while(1)
    {
        getline(cin,a);
        getline(cin,b);
        if(a[0]=='*')
            break;
        long int i1=-1,i2=-1;
        for(long int i=0;i<a.length();i++)
            if(a[i]!='0')
                {
                    i1=i;
                    break;
                }
        for(long int i=0;i<b.length();i++)
            if(b[i]!='0')
                {
                    i2=i;
                    break;
                }
        if(i1==-1&&i2==-1)
            printf("=\n");
        if(i1!=-1&&i2==-1)
            printf(">\n");
        if(i1==-1&&i2!=-1)
            printf("<\n");
        if(i1!=-1&&i1!=-1)
        {
            a=a.substr(i1,a.length()-i1);
            b=b.substr(i2,b.length()-i2);
            if(a.length()<b.length())
                printf("<\n");
            if(a.length()>b.length())
                printf(">\n");
            if(a.length()==b.length())
            {
                int f=0;
                for(long int i=0;i<a.length();i++)
                {
                    if(a[i]>b[i])
                    {
                        f=1;
                        break;
                    }
                    if(a[i]<b[i])
                    {
                        f=2;
                        break;
                    }
                }
                if(f==0)
                    printf("=\n");
                if(f==1)
                    printf(">\n");
                if(f==2)
                    printf("<\n");

            }
        }
        
    }
	return 0;
}
