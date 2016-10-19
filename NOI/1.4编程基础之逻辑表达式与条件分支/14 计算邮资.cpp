#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int m;
	char c;
	int rmb;
	cin>>m>>c;
	if(m<=1000)
		rmb=8;
	else
		rmb=8+4*((m-1000)/500)+4*((m-1000)%500!=0);
	if(c=='y')
		rmb+=5;
	cout<<rmb<<endl;
	return 0;
}
