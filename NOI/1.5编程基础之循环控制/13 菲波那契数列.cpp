#include<iostream>
#include<cstdio>
using namespace std;
long int f[47]={0};
int main()
{
	int n;
	f[0]=0;
	f[1]=1;
	for(int i=2;i<47;i++)
		f[i]=f[i-1]+f[i-2];
	cin>>n;
	cout<<f[n]<<endl;
	return 0;
}
