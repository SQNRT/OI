#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long int a,n;
	long int multi=1;
	cin>>a>>n;
	for(int i=0;i<n;i++)
		multi*=a;
	cout<<multi<<endl;
	return 0;
}
