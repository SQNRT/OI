#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char c[111]={0};
    char d[111]={0};
	char p[30]={0};
	char m[111]={0};
	char t;
	int l;
	for(int i=0;i<26;i++)
		p[i]=0;
	scanf("%s%s%s",&c,&d,&m);
	l=strlen(c);
	for(int i=0;i<l;i++)
	{
		if(p[c[i]-'A']!=0)
		{
			if(p[c[i]-'A']!=d[i])
			{
				cout<<"Failed"<<endl;
				return 0;
			}
		}
		else
			p[c[i]-'A']=d[i];
	}
	for(int i=0;i<26;i++)
		if(p[i]==0)
		{
			cout<<"Failed"<<endl;
			return 0;
		}
    for(int i=0;i<26;i++)
    	for(int j=0;j<26;j++)
			if(p[i]==p[j]&&i!=j)
			{
				cout<<"Failed"<<endl;
				return 0;
			}
	l=strlen(m);
	for(int i=0;i<l;i++)
		cout<<p[m[i]-'A'];
	cout<<endl;
	return 0;
}
