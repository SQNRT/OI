#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int k;
	int t;
	int sum[3]={0};
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>t;
		if(t==1)
			sum[0]++;
		else if(t==5)
			sum[1]++;
		else if(t==10)
			sum[2]++;
	}
	cout<<sum[0]<<endl<<sum[1]<<endl<<sum[2]<<endl;
	return 0;
}
