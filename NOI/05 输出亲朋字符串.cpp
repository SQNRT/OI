#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[100]={0};
	char r[100]={0};
	int l;
	gets(s);
	l=strlen(s);
	for(int i=0;i<l-1;i++)
		r[i]=s[i]+s[i+1];
	r[l-1]=s[l-1]+s[0];
	printf("%s",r);
	return 0;
}
