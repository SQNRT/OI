#include<iostream>
#include<cstring>
using namespace std;
long int res[50000]={0};
long int jw[50000]={0};
int main()
{
	int n;
	int l=1;
	memset(res,0,sizeof(res));
	cin >> n;
	res[0]=1;
	for(int i=1;i<=n;i++)
	{
		int t=l;
		memset(jw,0,sizeof(jw));
		for(int j=0;j<l;j++)
		{
			res[j] *= i;
			res[j] += jw[j];
			if(res[j]/10 >0)
			{
				jw[j+1] += res[j]/10;
				res[j] = res[j]%10;
				if(j+1 == l)
					l++;
			}
			
		}
	}
	
	for(int i=l-1;i>=0;i--)
		cout<<res[i];
	cout<<endl;
	return 0;
}

