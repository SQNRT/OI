/*
ID: fx.yoyo1
LANG: C++ 
TASK: ariprog
*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int hash[125001]={0};
int main()
{
	FILE *in,*out;
	in=fopen("ariprog.in","r");
	out=fopen("ariprog.out","w");
	
	int n,m;
	int p,q;
	int flag=0;
	
	fscanf(in,"%d",&n);
	fscanf(in,"%d",&m);
	
	memset(hash,0,125001);
	
	for(p=0;p<=m;p++)
		for(q=p;q<=m;q++)
			hash[p*p+q*q]=1;
	
	for(int i=1;i<=m*m*2/(n-1);i++)
		for(int j=0;j<=m*m*2-(n-1)*i;j++)
		{
			int k=0;
			for(k=0;k<n;k++)
				if(hash[j+k*i]!=1)
					break;
			
			if(k==n)
			{
				flag++;
				fprintf(out,"%ld %ld\n",j,i);
			}
		}
	
	if(flag==0)
		fprintf(out,"NONE\n");
	
	fclose(in);
	fclose(out);
	return 0;
}
