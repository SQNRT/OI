#include<iostream>
#include<cstdio>
using namespace std;
long int n;
long int f[50001]={0};
int main()
{
	long int i, j;
	long int t;
	long int lis=1;
	cin >> n;
	cin >> t;
	f[lis++] = t;
	for(i = 1; i < n; i++)
	{
		cin >> t;
		if(t > f[lis-1])
		{
			f[lis] = t;
			lis++;
		}
		else
		{
			for(j = lis-1; j > 0; j--)
				if(t > f[j])
					break;
			f[j+1] = t;
		}
	}
	cout << lis-1 << endl;
	return 0;
}
