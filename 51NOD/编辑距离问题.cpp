#include<iostream>
#include<cstdio>
#include<cstring>
#define min(a,b) (a)<(b)?(a):(b)
using namespace std;
char a[1000],b[1000];
int dp[1001][1001]={0};
int main()
{
	int la,lb;
	int i,j;
	int temp;
	cin >> a >> b;
	la=strlen(a);
	lb=strlen(b);
	for(i=0;i<=la;i++)
		dp[i][0] = i;
	for(j=0;j<=lb;j++)
		dp[0][j] = j;
	for(i=1;i<=la;i++)
		for(j=1;j<=lb;j++)
		{
			temp = min(dp[i-1][j],dp[i][j-1]);
			if(a[i-1] == b[j-1])
				dp[i][j] = min(dp[i-1][j-1],temp+1);
			else
				dp[i][j] = min(dp[i-1][j-1]+1,temp+1);
		}
	cout << dp[la][lb] << endl;
	return 0;
}
