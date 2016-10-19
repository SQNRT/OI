/*
ID: fx.yoyo1
LANG: C++ 
TASK: wormhole
*/
#include<iostream>
#include<cstdio> 
#include<cstring>
using namespace std;

int n;
long int cordinary[12][2]={0};

int hash[12]={0};
int pairx[6][2]={0};
int p=0;

int fff[12]={0};

int res=0;

int loopcheck(int i)
{
	long int min=2000000000,minj=12;
	for(int j=0;j<n;j++)
		if(cordinary[j][0]>cordinary[i][0]&&cordinary[j][1]==cordinary[i][1]&&cordinary[j][0]<min)
		{
			min=cordinary[j][0];
			minj=j;
		}
	
	int j=minj;
	if(minj==12)
		return 0;
	
	if(fff[j]==fff[i]&&fff[i]!=j)
		return 1;
	fff[j]=fff[i];
	
	for(int k=0;k<n/2;k++)
		if(pairx[k][0]==j)
		{
			if(loopcheck(pairx[k][1])==1)
				return 1;
		}
		else if(pairx[k][1]==j)
		if(loopcheck(pairx[k][0])==1)
			return 1;
	
	return 0;
}

int group(int deep)
{
	if(deep==n)
	{				
		for(int i=0;i<n;i++)
		{	
			for(int j=0;j<n;j++)
				fff[j]=j;
			
			if(fff[i]!=i)
				continue;
			else if(loopcheck(i)==1)
			{
				res++;
				break;
			}
		}
	}
	else
		for(int i=0;i<n;i++)
			if(deep%2==0&&i>=deep+1)
				break;
			else if(deep%2==0&&deep>0&&i<pairx[deep/2-1][0])
				continue;
			else if(deep%2==1&&i<pairx[deep/2][0])
				continue; 
			else if(hash[i]==0)
			{
				pairx[deep/2][p]=i;
				
				hash[i]=1;
				p++;
				p=p%2;
				
				group(deep+1);
				
				hash[i]=0;
				p++;
				p=p%2;
			}
	return 0;
}

int main()
{
	FILE *in,*out;
	in=fopen("wormhole.in","r");
	out=fopen("wormhole.out","w");
	
	fscanf(in,"%d",&n);
	for(int i=0;i<n;i++)
		fscanf(in,"%d%d",&cordinary[i][0],&cordinary[i][1]);
	
	group(0);
	
	fprintf(out,"%d\n",res);
	
	fclose(in);
	fclose(out);
	return 0;
}
