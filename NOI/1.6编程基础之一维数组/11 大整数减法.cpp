#include<iostream>
#include<cstring>
using namespace std;
char a[222],b[222];
int c[222],d[222],e[222];
int main()
{
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	memset(d,0,sizeof(d));
	memset(e,0,sizeof(e));
	scanf("%s%s",&a,&b);
	int la = strlen(a);
	int lb = strlen(b);
	int le=1;
	for(int i=la-1;i>=0;i--)
		c[la-i]=a[i]-'0';
	for(int j=lb-1;j>=0;j--)
		d[lb-j]=b[j]-'0';
	for(int i=1, j=1;i<=la;i++)
		{
			if(c[i]+e[le] >= d[j])
				e[le++] += c[i] - d[j];
			else
			{
				e[le++] += c[i] + 10 - d[j];
				e[le] = -1;
			}
			
			if(j<=lb)
				j++;
				
		}
	for(int i=la;i>=1;i--)
		if(e[i]!=0)
		{
			le = i;
			break;
		}
	for(int i=le;i>=1;i--)
		cout<<e[i];
	if(le == 0)
		cout<<"0";
	cout<<endl;
	return 0;
}
