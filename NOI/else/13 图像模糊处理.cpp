#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n,m;
	int pic[100][100];
	int picn[100][100];
	double t;
	
	cin>>n>>m;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>pic[i][j];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			if(i==0||i==n-1||j==0||j==m-1)
				picn[i][j]=pic[i][j];
			else
			{
				t=(double)(pic[i][j]+pic[i-1][j]+pic[i+1][j]+pic[i][j-1]+pic[i][j+1])/5;
				if(t-(int)t>=0.5)
					picn[i][j]=(int)t+1;
				else
					picn[i][j]=(int)t;
			}
		}
			
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m-1;j++)
			cout<<picn[i][j]<<" ";
		cout<<picn[i][m-1]<<endl;
	}
	return 0;
}
