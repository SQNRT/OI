#include<iostream>
#include<cstdio>
#define max(a,b) (a)>(b)?(a):(b)
using namespace std;
int n;
long int a[500][500]={0};
long int value=0;
int main()
{
	int i,j;
	cin >> n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin >> a[i][j];
	for(i=1;i<n;i++)
	{
		a[i][0] += a[i-1][0];
		a[0][i] += a[0][i-1];
	}
	for(i=1;i<n;i++)
		for(j=1;j<n;j++)
			a[i][j] += max(a[i-1][j],a[i][j-1]);
	value = a[n-1][n-1];
	cout << value << endl;
	return 0;
}
