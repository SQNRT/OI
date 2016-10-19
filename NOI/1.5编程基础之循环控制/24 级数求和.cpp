#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int k;
	double sn=0;
	cin>>k;
	for(int i=1;;i++)
	{
		sn=sn+1.0/i;
		if(sn>k)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
