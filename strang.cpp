#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
long long int imp(string s)
{
	string z=s;
	long long int impt=s.length();
	for(long int i=1;i<s.length()-1;i++)
    {
        long long int u=0;
        for(long int index=0;index<=s.length()-i;index++)
        {
            string sub=s.substr(index,i);
            long int count=0;
            long int ind=0;
            while(1)
            {
                ind=s.find(sub,ind);
                if(ind<0)
                    break;
                else
                    count++;
                ind++;
            }
            if(impt<count*i)
                impt=count*i;
            u=u+count;
        }
        if(u==0)
            return impt;
        if(impt>=((s.length()-i+1)*(i+1)))
            return impt;
    }
    return impt;
}
int main()
{
    char arr[100000];
	scanf("%s",arr);
    string s(arr);
	long long int t=imp(s);
    printf("%lld",t);
	return 0;
}
