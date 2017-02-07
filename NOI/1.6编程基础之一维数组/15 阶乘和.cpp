#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int r[100]={0};
int s[100]={0};
int main()
{
	int n;
	r[0]=1;
	r[1]=1;
	s[0]=1;
	s[1]=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=r[0];j++)
			r[j]*=i*1;
		for(int j=1;j<=r[0];j++)
		{
			r[j+2]+=r[j]/100;
			r[j+1]+=r[j]/10%10;
			r[j]=r[j]%10;
		}
		if(r[r[0]+2]!=0)
			r[0]+=2;
		else if(r[r[0]+1]!=0)
			r[0]+=1;
		for(int j=1;j<=r[0];j++)
		{	
			s[j]+=r[j];
			s[j+1]+=s[j]/10;
			s[j]=s[j]%10;
		}
		s[0]=r[0];
		if(s[r[0]+1]!=0)
			s[0]++;
	}
	for(int i=s[0];i>=1;i--)
		printf("%d",s[i]);
	cout<<endl;
	return 0;
}

