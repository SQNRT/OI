#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[80]={0};
	int l;
	gets(s);
	l=strlen(s);
	for(int i=0;i<l;i++)
	{
		if(s[i]=='Z')
			cout<<"A";
		else if(s[i]=='z')
			cout<<"a";
		else if(('A'<=s[i]&&s[i]<'Z')||('a'<=s[i]&&s[i]<'z'))
			printf("%c",s[i]+1);
		else
			cout<<s[i];
	}
	cout<<endl;
	return 0;
}
