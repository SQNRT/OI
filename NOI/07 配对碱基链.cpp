#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[256]={0};
	int l;
	gets(s);
	l=strlen(s);
	for(int i=0;i<l;i++)
		if(s[i]=='A')
			cout<<"T";
		else if(s[i]=='G')
			cout<<"C";
		else if(s[i]=='T')
			cout<<"A";
		else if(s[i]=='C')
			cout<<"G";
	cout<<endl;
	return 0;
}
