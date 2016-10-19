#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int d[100]={0};
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>d[i];
	for(int i=n-1;i>0;i--)
		cout<<d[i]<<" ";
	cout<<d[0]<<endl;
	return 0;
}
