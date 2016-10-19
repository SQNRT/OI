#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b;
	double c;
	cin>>a>>b;
	c=(double)100*b/a;
	printf("%.3lf%%\n",c);
	return 0;
}
