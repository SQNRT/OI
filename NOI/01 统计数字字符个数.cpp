#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[256]={0};
	int l;
	int c=0;
	gets(s);
	l=strlen(s);
	for(int i=0;i<l;i++)
		if('0'<=s[i]&&s[i]<='9')
			c++;
	cout<<c<<endl;
	return 0;
}
