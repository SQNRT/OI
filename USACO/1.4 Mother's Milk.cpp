/*
ID: fx.yoyo1
LANG: C++ 
TASK: milk3
*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int hash[21]={0};
int main()
{
	FILE *in,*out;
	in=fopen("milk3.in","r");
	out=fopen("milk3.out","w");
	
	int a,b,c;
	fscanf(in,"%d%d%d",&a,&b,&c);
	
	memset(hash,0,21);
	hash[c]=1;
	hash[c>b?c-b:0]=1;
	
	if(a<b)
	{
		for(int i=c>b?c-b:0;i<=c;i+=a)
			hash[i]=1;
		for(int i=0;i*a<=b;i++)
			hash[c-i*a]=1;
		if(b%a!=0)
			for(int i=c-b%a;i>=(c>b?c-b:0)&&i>c-b%a-a&&i>c-b%a-(c-b)/(b%a)-b%a;i-=b%a)
			{
				hash[i]=1;
				if(i-a>=(c>b?c-b:0))
					hash[i-a]=1;
				else if(i+a<=c)
					hash[i+a]=1;
			}
		if(a-b%a!=0)
			for(int i=c-(a-b%a);i>=(c>b?c-b:0)&&i>c-(a-b%a)-a&&i>c-(a-b%a)-(c-a)/(a-b%a)-(a-b%a)&&c/a>b/a;i-=a-b%a)
			{
				hash[i]=1;
				if(i-a>=(c>b?c-b:0))
					hash[i-a]=1;
				else if(i+a<=c)
					hash[i+a]=1;
			}
		if(c-(c-b+b%a)>=(c>b?c-b:0))
			hash[c-(c-b+b%a)]=1;
		if(c-(c-b+b%a)+a<c)
			hash[c-(c-b+b%a)+a]=1;
		if(c-(c-b+b%a)-a>=(c>b?c-b:0))
			hash[c-(c-b+b%a)-a]=1;
		if(c-a<=b)
			hash[a]=1;
	}
	else
		hash[c-a%b]=1; 
	
	for(int i=0;i<c;i++)
		if(hash[i]==1)
			fprintf(out,"%d ",i);
	fprintf(out,"%d\n",c);
	
	fclose(in);
	fclose(out);
	return 0;
}
