#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double x,y;
	int ren;
	double sum=0;
	int res;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y>>ren;
		double d=sqrt(x*x+y*y);
		sum+=d/50*2+ren*1.5;
	}
	res=(int)sum;
	if(sum-res==0)
		cout<<res<<endl;
	else
		cout<<res+1<<endl;
	return 0;
}
