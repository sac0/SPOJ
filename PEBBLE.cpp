#include <iostream>
#include <string>
using namespace std;
void doflip( char &c ) 
{
  if(c=='0')
  	c='1';
  else
  	c='0';
}
int main()
{
  	bool Flip;
  	int count=1,reqflips;
  	string bin;
  	while (cin>>bin)
  	{
    	Flip=false;
    	reqflips=0;
    	for ( int i = 0;i<bin.size();i++)
    	{
      		if(Flip)
        		doflip(bin[i]);
      		if (bin[i]=='1')
      		{
        		doflip(bin[i]);
        		Flip=!Flip;
        		++reqflips;
      		}
    	}	
    cout<<"Game #"<<count++<< ": " <<reqflips<< '\n';
  	}
  	return 0;
}