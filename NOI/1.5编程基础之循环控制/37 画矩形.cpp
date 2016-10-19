#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int h,w;
	char c;
	int a;
	cin>>h>>w>>c>>a;
	for(int i=1;i<=w;i++)
		cout<<c;
	cout<<endl;
	for(int i=2;i<h;i++)
	{
		cout<<c;
		for(int j=2;j<w;j++)
		{
			if(a==1)
				cout<<c;
			else
				cout<<" ";
		}
		cout<<c<<endl;
	}
	for(int i=1;i<=w;i++)
		cout<<c;
	cout<<endl;
	return 0;
}
