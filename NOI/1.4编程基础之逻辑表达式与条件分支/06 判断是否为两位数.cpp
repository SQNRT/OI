#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int x;
	cin>>x;
	if(x/10>0&&x/100==0)
		cout<<"1"<<endl;
	else
		cout<<"0"<<endl;
}
