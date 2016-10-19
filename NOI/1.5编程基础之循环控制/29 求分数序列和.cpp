#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int p[30],q[30];
	int n;
	double sum=0;
	cin>>n;
	p[0]=1;
	q[0]=2;
	for(int i=1;i<30;i++)
	{
		p[i]=q[i-1];
		q[i]=q[i-1]+p[i-1];
	}
	for(int i=0;i<n;i++)
		sum+=(double)q[i]/p[i];
	printf("%.4lf\n",sum);
	return 0;
}
