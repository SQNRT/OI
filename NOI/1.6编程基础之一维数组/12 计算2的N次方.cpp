#include<iostream>
using namespace std;
int res[100]={0};
int main()
{
	int n;
	int l=1;
	cin >> n;
	res[0]=1;
	for(int i=1;i<=n;i++)
	{
		int t=l,temp;
		for(int j=t-1;j>=0;j--)
		{
			res[j] *= 2;
			if(res[j]/10 >0)
			{
				res[j+1] += res[j]/10;
				res[j] = res[j]%10;
				if(j+1==l)
					l++;
			}
		}
	}
	for(int i=l-1;i>=0;i--)
		cout<<res[i];
	cout<<endl;
	return 0;
}
