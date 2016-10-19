#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int t[3];
	int sum[3]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t[0]>>t[1]>>t[2];
		sum[0]+=t[0];
		sum[1]+=t[1];
		sum[2]+=t[2];
	}
	cout<<sum[0]<<" "<<sum[1]<<" "<<sum[2]<<" "<<sum[0]+sum[1]+sum[2]<<endl;
	return 0;
}
