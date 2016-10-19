#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	float n;
	cin>>n;
	if(n>=0)
		printf("%.2f\n",n);
	else
		printf("%.2f\n",-n);
	return 0;
}
