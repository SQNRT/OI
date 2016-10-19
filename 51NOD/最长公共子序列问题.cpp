#include<iostream>
#include<cstdio>
#include<cstring>
#define max(a,b) (a)>(b)?(a):(b)
using namespace std;
int dp[1001][1001]={0},map[1001][1001]={0};
char a[1000],b[1000],c[1000];
int main()
{
	int i,j;
	int la,lb,lc;
	cin >> a >> b;
	la=strlen(a);
	lb=strlen(b);
	lc=0;
	for(i=0;i<=la;i++)
		for(j=0;j<=lb;j++)
		{
			if(i==0||j==0)
				dp[i][j] = 0;
			else if(a[i-1] == b[j-1])
			{
				dp[i][j] = dp[i-1][j-1] + 1;
				map[i][j] = 3;
			}
			else
			{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
				if(dp[i-1][j] > dp[i][j-1])
					map[i][j] = 1;
				else
					map[i][j] = 2;
			}
		}
	lc = dp[la][lb];
	c[lc] = '\0';
	for(i=la,j=lb;i>0&&j>0;)
		{
			if(a[i-1] == b[j-1])
			{
				c[--lc] = a[i-1];
				i--;
				j--;
			}
			else
			{
				if(map[i][j] == 1)
				{
					i--;
				}
				else if(map[i][j] == 2)
				{
					j--;
				}
			}
		}
	cout << c << endl;
	return 0;
}
