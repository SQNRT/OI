#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double x,a,b,c,d;
	double f;
	cin>>x>>a>>b>>c>>d;
	f=a*x*x*x+b*x*x+c*x+d;
	printf("%.7lf\n",f);
	return 0;
}
