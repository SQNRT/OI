/*
ID: fx.yoyo1
LANG: C++ 
TASK: numtri
*/
#include<iostream>
#include<cstdio>
using namespace std;
int r;
int data[1000][1000]={0};
int main()
{
	FILE *in,*out;
	in=fopen("numtri.in","r");
	out=fopen("numtri.out","w");
	
	fscanf(in,"%d",&r);
	for(int i=0;i<r;i++)
		for(int j=0;j<=i;j++)
			fscanf(in,"%d",&data[i][j]);
	
	for(int i=1;i<r;i++)
		for(int j=0;j<=i;j++)
		{
			if(j==0)
				data[i][j]+=data[i-1][j];
			else if(j==i)
				data[i][j]+=data[i-1][j-1];
			else
				data[i][j]+=(data[i-1][j-1]>data[i-1][j]?data[i-1][j-1]:data[i-1][j]);
		}
	
	int max=0;
	for(int i=0;i<r;i++)
		if(data[r-1][i]>max)
			max=data[r-1][i];
	
	fprintf(out,"%d\n",max);
	
	fclose(in);
	fclose(out);
	return 0;
}
