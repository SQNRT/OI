#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int a[3]={0},b[3]={0};
	for(int i=1;i<=7*7*7+7*7+7;i++)
	{
		a[0]=i/(7*7);
		a[1]=i/7%7;
		a[2]=i%7;
		b[0]=i/(9*9);
		b[1]=i/9%9;
		b[2]=i%9;
		if(a[0]==b[2]&&a[1]==b[1]&&a[2]==b[0])
		{
			cout<<i<<endl;
			cout<<a[0]<<a[1]<<a[2]<<endl;
			cout<<b[0]<<b[1]<<b[2]<<endl;
		}
	}
	return 0;
}
