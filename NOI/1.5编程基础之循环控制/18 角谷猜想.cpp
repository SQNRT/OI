#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long int n;
	long int t;
	cin>>n;
	t=n;
	while(t!=1)
	{
		if(t%2==1)
		{
			cout<<t<<"*3+1="<<t*3+1<<endl;
			t=t*3+1;
		}
		else
		{
			cout<<t<<"/2="<<t/2<<endl;
			t=t/2;
		}
	}
	cout<<"End"<<endl;
	return 0;
}
