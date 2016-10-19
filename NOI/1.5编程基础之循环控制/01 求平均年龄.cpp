#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int sum=0;
	int t;
	double age;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		sum+=t;
	}
	age=(double)sum/n;
	printf("%.2f\n",age);
	return 0;
}
