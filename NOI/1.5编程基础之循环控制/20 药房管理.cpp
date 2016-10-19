#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long int m;
	int n;
	long int t;
	int c=0;
	cin>>m>>n;
	for(int i=0,a;i<n;i++)
	{
		cin>>t;
		if(t>m)
		{
			c++;
			continue;
		}
		m=m-t;
	}
	cout<<c<<endl;
	return 0;
}
