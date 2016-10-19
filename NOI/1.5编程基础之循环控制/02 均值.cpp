#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	double sum=0;
	double t;
	double age;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		sum+=t;
	}
	age=(double)sum/n;
	printf("%.4f\n",age);
	return 0;
}
