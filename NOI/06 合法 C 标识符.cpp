#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[21]={0};
	int l;
	gets(s);
	l=strlen(s);
	for(int i=0;i<l;i++)
		if(s[i]<'0'||('9'<s[i]&&s[i]<'A')||('Z'<s[i]&&s[i]<'a'&&s[i]!='_')||s[i]>'z')
		{
			cout<<"no"<<endl;
			return 0;
		}
	if(s[0]>'9')
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}
