#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[100002]={0};
	long int l;
	long int hash[27][2]={0};
	char min;
	gets(s);
	l=strlen(s);
	for(int i=0;i<l;i++)
	{
		hash[s[i]-'a'+1][0]++;
		hash[s[i]-'a'+1][1]=i;
	}
	hash[0][0]=100002;
	for(int i=1;i<27;i++)
		if(hash[i][0]==1&&hash[i][1]<hash[0][0])
		{
			hash[0][0]=hash[i][1];
			min='a'+i-1;
		}
	if(hash[0][0]<100002)
		cout<<min<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}
