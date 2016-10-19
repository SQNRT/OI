#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int a[1000],b[1000];
	long int ab=0;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	for(int i=0;i<n;i++)
		ab+=a[i]*b[i];
	cout<<ab<<endl;
	return 0;
}
