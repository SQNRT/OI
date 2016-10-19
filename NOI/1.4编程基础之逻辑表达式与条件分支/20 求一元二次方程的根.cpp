#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	double x1,x2;
	cin>>a>>b>>c;
	if(b*b-4*a*c>0)
	{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		if(x1==-0)
			x1=0;
		else if(x2==-0)
			x2=0;
		printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
	}
	else if(b*b-4*a*c==0)
	{
		x1=x2=(-b+sqrt(b*b-4*a*c))/(2*a);
		if(x1==-0)
			x1=0;
		printf("x1=x2=%.5lf\n",x1);
	}
	else
	{
		double delta=sqrt(4*a*c-b*b)/(2*a);
		x1=x2=-b/(2*a);
		if(x1==-0)
			x1=0;
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",x1,delta,x1,delta);
	}
	return 0;
}
