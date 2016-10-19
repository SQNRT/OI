#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double xa,ya,xb,yb;
	double l;
	cin>>xa>>ya>>xb>>yb;
	l=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	printf("%.3lf\n",l);
	return 0;
}
