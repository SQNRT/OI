#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double price[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	int t;
	double total=0;
	for(int i=0;i<10;i++)
	{
		cin>>t;
		total+=price[i]*t;
	}
	printf("%.1lf\n",total);
	return 0;
}
