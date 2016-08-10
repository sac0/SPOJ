#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    long int t;
    scanf("%ld",&t);
    for(long int i=1;i<=t;i++)
    {
        long int size;
        scanf("%ld",&size);
        string s[350];
        for(long int k=0;k<2*(size-1);k++)
        cin>>s[k];
        int index;
        for(long int k=0;k<2*(size-1);k++)
        {
            int count=0;
            for(long int g=0;g<2*(size-1);g++)
            {
                if(s[k]==s[g])
                count++;
            }
            if(count==1&&k%2==0)
                index=k;
        }
        int y=1;
        printf("Scenario #%ld:\n",i);
        cout<<s[index]<<endl;
        index++;
        while(1)
        {
            y++;
            cout<<s[index]<<endl;
            if(y==size)
                break;
            for(long int j=0;j<2*(size-1);j++)
                if(s[index]==s[j]&&(j!=index))
                    index=j+1;
        }
        printf("\n");
    }
}
