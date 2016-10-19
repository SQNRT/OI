#include<iostream>
using namespace std;
int main()
{
	int n,x,y;
	int res;
	cin>>n>>x>>y;
	res=(double)n-(double)y/x;
	if(res>=0)
		cout<<res<<endl;
	else
		cout<<"0"<<endl;
	return 0;
}
