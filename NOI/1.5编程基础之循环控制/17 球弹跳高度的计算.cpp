#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int h;
	cin>>h;
	double e=(double)h;
	double sum=e;
	for(int i=0;i<9;i++)
	{
		e/=2;
		sum+=e*2;
	}
	printf("%g\n%g\n",sum,e/2);
	return 0;
}
