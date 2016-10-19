#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[11]={0};
	int l;
	int i,j;
	scanf("%s",&s);
	l=strlen(s);
	for(i=l-1;i>=0;i--)
		if(s[i]!='0')
			break;
	if(s[0]=='-')
	{
		cout<<"-";
		for(j=i;j>0;j--)
			cout<<s[j];
	}
	else
		for(j=i;j>=0;j--)
			cout<<s[j];
	cout<<endl;
	return 0;
}
