#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	if(-1<=x&&x<=1&&-1<=y&&y<=1)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}
