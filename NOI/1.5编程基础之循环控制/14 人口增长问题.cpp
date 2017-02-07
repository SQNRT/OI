#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	double x;
	cin >> x >> n;
	for(int i=0;i<n;i++)
		x *= (1+0.001);
	printf("%.4lf\n",x);
	return 0;
}
