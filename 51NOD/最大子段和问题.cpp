#include<iostream>
#include<cstdio>
using namespace std;
long long answer=0;
long long endmax=0;
long int n;
int main()
{
	long int i,t;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> t;
		if(endmax > 0)
			endmax += t;
		else
			endmax = t;
		if(endmax > answer)
			answer = endmax;
	}
	cout << answer << endl;
	return 0;
}
