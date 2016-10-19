#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int m,n;
	int A[100][100]={0};
	
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>A[i][j];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m-1;j++)
			cout<<A[j][i]<<" ";
		cout<<A[m-1][i]<<endl;
	}
	
	return 0;
}
