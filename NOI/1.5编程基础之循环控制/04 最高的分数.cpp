#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int t;
	int max=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		if(t>max)
			max=t;
	}
	cout<<max<<endl;
	return 0;
}
