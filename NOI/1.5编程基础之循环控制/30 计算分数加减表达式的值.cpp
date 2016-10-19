#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int d[1000];
	int n;
	double sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2==1)
			sum+=1.0/i;
		else
			sum+=-1.0/i;
	}
	printf("%.4lf\n",sum);
	return 0;
}
