#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int t;
	int max=0;
	int min=1000;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		if(t>max)
			max=t;
		if(t<min)
			min=t;
	}
	cout<<max-min<<endl;
	return 0;
}
