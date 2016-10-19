#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a,b,c;
	int max;
	cin>>a>>b>>c;
	if(a+b<=c)
		cout<<"no"<<endl;
	else if(a+c<=b)
		cout<<"no"<<endl;
	else if(b+c<=a)
		cout<<"no"<<endl;
	else
		cout<<"yes"<<endl;
	return 0;
}
