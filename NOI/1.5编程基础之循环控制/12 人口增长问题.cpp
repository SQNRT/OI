#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int x,n;
	double e=1;
	cin>>x>>n;
	for(int i=0;i<n;i++)
		e*=1.001;
	printf("%.4lf\n",x*e);
	return 0;
}
