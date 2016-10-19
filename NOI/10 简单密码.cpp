#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int k='F'-'A';
	char s[201];
	gets(s);
	int l=strlen(s);
	for(int i=0;i<l;i++)
	{
		if(s[i]>=65&&s[i]<=65+25)
			printf("%c",((s[i]-k)>=65)?(s[i]-k):(s[i]-k+26));
		else
			cout<<s[i];
	}
	cout<<endl;
	return 0;
}
