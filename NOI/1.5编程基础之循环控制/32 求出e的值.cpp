#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double sum=1;
	long int t;
	int n;
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1,t=1;j<=i;j++)
			t*=j;
		sum+=1.0/t;
	}
	printf("%.10lf\n",sum);
	return 0;
}
