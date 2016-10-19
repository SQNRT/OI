#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	unsigned long int x;
	long int y;
	cin>>x>>y;
	if(y<0)
		cout<<">"<<endl;
	else if(x>2e31)
		cout<<">"<<endl;
	else
	{
		if(x>y)
			cout<<">"<<endl;
		else if(x==y)
			cout<<"="<<endl;
		else
			cout<<"<"<<endl;
	}
	return 0;
}
