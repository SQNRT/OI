#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int x,y;
	char c;
	cin>>x>>y>>c;
	if(c=='/'&&y==0)
		cout<<"Divided by zero!"<<endl;
	else if(c=='+')
		cout<<x+y<<endl;
	else if(c=='-')
		cout<<x-y<<endl;
	else if(c=='*')
		cout<<x*y<<endl;
	else if(c=='/')
		cout<<x/y<<endl;
	else
		cout<<"Invalid operator!"<<endl;
	return 0;
}
