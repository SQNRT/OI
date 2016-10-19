#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int y[4]={0};
	int n;
	int t;
	double r[4]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		if(0<=t&&t<=18)
			y[0]++;
		else if(19<=t&&t<=35)
			y[1]++;
		else if(36<=t&&t<=60)
			y[2]++;
		else if(61<=t)
			y[3]++;
	}
	for(int i=0;i<4;i++)
	{
		r[i]=(double)y[i]/n;
		printf("%.2lf%%\n",r[i]*100);
	}
	return 0;
}
