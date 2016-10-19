#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	float sum=0;
	float t;
	float x;
	long int n;
	int i;
	cin>>x>>n;
	for(i=0,t=1;i<=n;i++)
	{
		sum+=t;
		t=t*x;
	} 
	printf("%.2lf\n",sum);
	return 0;
}
