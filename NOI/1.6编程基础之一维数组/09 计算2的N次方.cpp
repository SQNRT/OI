#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int r[32]={0};
int main()
{
	int n;
	r[0]=1;
	r[1]=1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=r[0];j++)
			r[j]*=2;
		for(int j=1;j<=r[0];j++)
		{
			r[j+1]+=r[j]/10;
			r[j]=r[j]%10;
		}
		if(r[r[0]+1]!=0)
			r[0]++;
		
	}
	for(int i=r[0];i>=1;i--)
		printf("%d",r[i]);
	cout<<endl;
	return 0;
}
