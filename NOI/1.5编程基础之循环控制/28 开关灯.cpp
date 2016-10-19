#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	bool s[5001];
	int n,m;
	int i,j;
	cin>>n>>m;
	for(i=0;i<=5000;i++)
		s[i]=1;
	for(j=1;j<=m;j++)
		for(i=0;i<=n;i=i+j)
			{
				if(s[i])
					s[i]=0;
				else
					s[i]=1;
			}
	for(j=n;j>0;j--)
		if(s[j]==0)
			break;
	for(int i=1;i<j;i++)
		if(s[i]==0)
			cout<<i<<",";
	cout<<j<<endl;
	return 0;
}
