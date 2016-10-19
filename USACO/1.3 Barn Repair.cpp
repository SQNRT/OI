/*
ID: fx.yoyo1
LANG: C++ 
TASK: barn1
*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	FILE *in,*out;
	in=fopen("barn1.in","r");
	out=fopen("barn1.out","w");
	int m,s,c;
	int stall[200]={0};
	int blank[200]={0};
	int t;
	int barn=0;
	fscanf(in,"%d%d%d",&m,&s,&c);
	for(int i=0;i<c;i++)
		fscanf(in,"%d",&stall[i]);
	for(int i=0;i<c-1;i++)
		for(int j=i+1;j<c;j++)
			if(stall[i]>stall[j])
				{
					t=stall[i];
					stall[i]=stall[j];
					stall[j]=t;
				}
	for(int i=0;i<c-1;i++)
		blank[i]=stall[i+1]-stall[i]-1;
	for(int i=0;i<c-2;i++)
		for(int j=i+1;j<c-1;j++)
			if(blank[i]<blank[j])
				{
					t=blank[i];
					blank[i]=blank[j];
					blank[j]=t;
				}
	barn=stall[c-1]-stall[0]+1;
	t=1;
	for(int i=0;i<m-1;i++)
		barn-=blank[i];
	fprintf(out,"%d\n",barn);
	fclose(in);
	fclose(out);
	return 0;
}
