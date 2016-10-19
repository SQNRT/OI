#include<iostream>
using namespace std;
int main()
{
	int n,m;
	int c=0;
	int t[100];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>t[i];
	cin>>m;
	for(int i=0;i<n;i++)
		if(t[i]==m)
			c++;
	cout<<c<<endl;
	return 0;
}
