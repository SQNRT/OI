#include<iostream>
#include<cstdio>
using namespace std;
long int prime[10002]={0};
int main()
{
	int n;
	int i,j;
	int flag=0;
	prime[0]=1;
	cin>>n;
	for(i=2;prime[0]!=10001;i++)
	{
		flag=0;
		for(j=2;j*j<=i;j++)
			if(i%j==0&&i/j!=1)
				{
					flag=1;
					break;
				}
		if(flag==0)
			prime[prime[0]++]=i;
	}
	cout<<prime[n]<<endl;
	return 0;
}
