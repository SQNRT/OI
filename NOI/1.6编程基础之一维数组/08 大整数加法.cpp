#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a[200]={0},b[200]={0};
int c[201]={0};
int main()
{
	int la,lb,l;
	char t[200];
	scanf("%s",&t);
	la=strlen(t);
	for(int i=0;i<la;i++)
		a[i]=t[la-i-1]-48;
	scanf("%s",&t);
	lb=strlen(t);
	for(int i=0;i<lb;i++)
		b[i]=t[lb-i-1]-48;
	l=la>lb?la:lb;
	for(int i=0;i<l;i++)
	{
		c[i]+=a[i]+b[i];
		c[i+1]+=c[i]/10;
		c[i]=c[i]%10;
	}
	if(c[l]!=0)
		l++;
	for(int i=l-1;i>=0;i--,l--)
		if(c[i]!=0)
		{
			l=i;
			break;
		}
	for(int i=l;i>=0;i--)
		printf("%d",c[i]);
	cout<<endl;
	return 0;
}
