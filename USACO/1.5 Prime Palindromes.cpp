/*
ID: fx.yoyo1
LANG: C++ 
TASK: pprime
*/
#include<iostream>
#include<cstdio>
using namespace std;
long int sstable[1500]={0};
long int x=0;
long int e10[10]={1e0,1e1,1e2,1e3,1e4,1e5,1e6,1e7,1e8,1e9};
long int a,b;
int n=0;
int quit=0;
FILE *out=fopen("pprime.out","w");
void pre_sstable(void)
{
	int i,j;
	for(i=2;i<10000;i++)
	{
		int flag=1;
		for(j=0;sstable[j]*sstable[j]<=i&&j<x;j++)
		{
			if(sstable[j]==0)
			{	
				flag=0;
				break;
			}
			if(i%sstable[j]==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
			sstable[x++]=i;
	}
}
int checkss(long int num)
{
	int i;
	if(num/10000==0)
	{
		for(i=0;i<x;i++)
			if(num==sstable[i])
				return 1;
			else if(num<sstable[i])
				return 0;
		return 0;
	}
	else
	{
		for(i=0;i<x&&sstable[i]*sstable[i]<=num;i++)
			if(num%sstable[i]==0)
				return 0;
		return 1;
	}
}
void makehw(long int num,int deep)
{
	int i=0;
	if(quit==1)
		return;
	if(deep*2>=n)
	{
		for(i=0;i<n-deep;i++)
			num+=((num/e10[i])%10)*e10[n-i-1];
		if(num<a)
			return;
		if(num>b)
		{
			fclose(out);
			quit=1;
		}
		if(checkss(num)==1)
			fprintf(out,"%ld\n",num);
	}
	else
	{
		for(i=0;i<=9;i++)
		{
			num+=i*e10[deep];
			makehw(num,deep+1);
			num-=i*e10[deep];
		}
	}
}
int main()
{
	FILE *in=fopen("pprime.in","r");
	long int i,j;
	fscanf(in,"%ld%ld",&a,&b);
	fclose(in);
	pre_sstable();
	for(i=1;i<=8;i++)
	{
		n=i;
		if(e10[i]<=a)
			continue;
		for(j=1;j<=9;j++)
			makehw(j,1);
	}
	
	return 0;
}
