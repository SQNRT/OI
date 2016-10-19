#include<iostream>
#include<cstdio>
using namespace std;
long int prime[10000]={0};
int main()
{
	long int n;
	long int i,j;
	int flag=0;
	prime[0]=1;
	cin>>n;
	for(i=2;i*i<=n;i++)
	{
		flag=0;
		for(j=1;j<prime[0];j++)
			if(i%prime[j]==0&&i/prime[j]!=1)
				{
					flag=1;
					break;
				}
		if(flag==0)
		{
			prime[prime[0]++]=i;
			if(n%i==0)
				break;
		}
	}
	cout<<n/i<<endl;
	return 0;
}
