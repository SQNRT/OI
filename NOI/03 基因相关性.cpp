#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[2][500]={0};
	double f;
	int l;
	int c=0;
	char t;
	cin>>f;
	cin>>t;
	gets(s[0]);
	cin>>t;
	gets(s[1]);
	l=strlen(s[0]);
	for(int i=0;i<l;i++)
		if(s[0][i]==s[1][i])
			c++;
	if((double)c/l<f)
		cout<<"no"<<endl;
	else
		cout<<"yes"<<endl;
	return 0;
}
