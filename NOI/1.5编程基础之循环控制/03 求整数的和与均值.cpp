#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	long int sum=0;
	int t;
	double age;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		sum+=t;
	}
	age=(double)sum/n;
	printf("%ld %.5f\n",sum,age);
	return 0;
}
