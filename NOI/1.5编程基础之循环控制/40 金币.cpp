#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	long int sum=0;
	int t=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
				{
					sum+=i;
					t++;
					if(t==n)
						break;
				}
			if(t==n)
				break;
		}
	cout<<sum<<endl;
	return 0;
}
