#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int t;
	int c=0;
	int a[4];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		a[0]=t/1000;
		a[1]=t/100%10;
		a[2]=t/10%10;
		a[3]=t%10;
		if(a[3]-a[2]-a[1]-a[0]>0)
			c++;
	}
	cout<<c<<endl;
	return 0;
}
