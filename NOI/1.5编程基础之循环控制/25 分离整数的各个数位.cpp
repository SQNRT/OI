#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long int a;
	long int t=10;
	cin>>a;
	while(1)
	{
		if(a/10!=0)
		{
			cout<<a%10<<" ";
			a=a/10;
		}
		else
			break;
	}
	cout<<a%10<<endl;
	return 0;
}
