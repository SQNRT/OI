#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double x,f;
	cin>>x;
	if(0<=x&&x<5)
		f=-x+2.5;
	else if(5<=x&&x<10)
		f=2-1.5*(x-3)*(x-3);
	else if(10<=x&&x<20)
		f=x/2-1.5;
	printf("%.3lf\n",f);
	return 0;
}
