/*
ID: fx.yoyo1
LANG: C++ 
TASK: sprime
*/
#include<iostream>
#include<cstdio>
using namespace std;
int n=0;
int rib0[4]={2,3,5,7};
int rib1[4]={1,3,7,9};
int sstable[1500]={0};
int x=0;
FILE *out=fopen("sprime.out","w");
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
void rib(long int num,int deep)
{
	if(deep==n)
	{
		fprintf(out,"%d\n",num);
		return;
	}
	else
	{
		int i=0;
		for(i=0;i<4;i++)
		{
			num=num*10+rib1[i];
			if(checkss(num)==0)
			{
				num=(num-rib1[i])/10;
				continue;
			}
			rib(num,deep+1);
			num=(num-rib1[i])/10;
		}
	}
}
int main()
{
	FILE *in;
	in=fopen("sprime.in","r");
	int i=0;
	fscanf(in,"%d",&n);
	pre_sstable();
	for(i=0;i<4;i++)
		rib(rib0[i],1);
	fclose(in);
	fclose(out);
	return 0;
}
