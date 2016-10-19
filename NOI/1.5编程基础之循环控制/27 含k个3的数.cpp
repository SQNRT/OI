#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[6]={0};
	int l;
	int k;
	int c=0;
	long int m=0;
	scanf("%s",&s);
	l=strlen(s);
	cin>>k;
	for(int i=0;i<l;i++)
		if(s[i]=='3')
			c++;
	for(int i=0;i<l;i++)
	{
		m+=s[i]-'0';
		m*=10;
	}
	m/=10;
	if(m%19==0&&c==k)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
