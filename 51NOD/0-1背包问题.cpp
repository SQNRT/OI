#include<iostream>
#include<cstdio>
#define max(a,b) (a)>(b)?(a):(b)
using namespace std;
int main()
{
	int n, w;
	int wp[100][2]={0};
	long int dp[10001]={0};
	int i, j;
	cin >> n >> w;
	for(i = 0; i < n; ++i)
		cin >> wp[i][0] >> wp[i][1];
	for(i = 0; i < n; ++i)
		for(j = w; j >= wp[i][0]; --j)
			dp[j] = max(dp[j], dp[j - wp[i][0]] + wp[i][1]);
	cout << dp[w] << endl;
	return 0;
}
