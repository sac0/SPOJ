#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		double u,k1,k2,t1,t2;
		scanf("%lf",&u);
		scanf("%lf",&k1);
		scanf("%lf",&k2);
	/*	t1=k1*u*u/5.0;
		t2=k2*u*u/20.0;
		t1=-t1/t2;*/
		double ang=atan((-4.0*k1/k2));
		ang=ang/2;
		cout<<atan(1)<<endl;
	}
}