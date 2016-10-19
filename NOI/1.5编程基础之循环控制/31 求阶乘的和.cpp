#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long int sum=0;
	long int t;
	int n;
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1,t=1;j<=i;j++)
			t*=j;
		sum+=t;
	}
	cout<<sum<<endl;
	return 0;
}
