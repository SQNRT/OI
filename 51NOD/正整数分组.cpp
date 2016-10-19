#include<iostream>
#include<cstdio>
#define max(a,b) (a)>(b)?(a):(b)
using namespace std;
int n;
int a[100]={0};
int f[101][10001]={0};
int main()
{
	int i, j;
	int sum = 0;
	int small, big;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	for(j=0;j<=sum/2;j++)
		f[0][j] = 0;
	for(i=1;i<=n;i++)
		for(j=1;j<=sum/2;j++)
		{
			if(j < a[i-1])
				f[i][j]=f[i-1][j];
			else
				f[i][j]=max(f[i-1][j],f[i-1][j-a[i-1]]+a[i-1]);
		}
	small = f[n][sum/2];
	big = sum - small;
	cout << big - small << endl;
	return 0;
}
