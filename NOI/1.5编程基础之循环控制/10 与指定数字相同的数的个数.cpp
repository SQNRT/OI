#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,m;
	int t;
	int sum=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		if(t==m)
			sum++;
	}
	cout<<sum<<endl;
	return 0;
}
