/*
ID: fx.yoyo1
LANG: C++ 
TASK: transform
*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	FILE *in,*out;
	in=fopen("transform.in","r");
	out=fopen("transform.out","w");
	int n;
	char input[10][10]={0},midput[10][10]={0},output[10][10]={0};
	int t=0;
	int hash[10]={0};
	fscanf(in,"%d",&n);
	for(int i=0;i<n;i++)
		fscanf(in,"%s",&input[i]);
	for(int i=0;i<n;i++)
		fscanf(in,"%s",&output[i]);
	for(int i=0;i<10;i++)
		hash[i]=1;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			{
				if(input[i][j]!=output[j][n-1-i])
					hash[1]=0;
				if(input[i][j]!=output[n-1-i][n-1-j])
					hash[2]=0;
				if(input[i][j]!=output[n-1-j][i])
					hash[3]=0;
				if(input[i][j]!=output[i][n-1-j])
					hash[4]=0;
				if(input[i][j]!=output[i][j])
					hash[6]=0;
			}
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			midput[i][j]=input[i][n-1-j];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			{
				if(midput[i][j]!=output[j][n-1-i])
					hash[7]=0;
				if(midput[i][j]!=output[n-1-i][n-1-j])
					hash[8]=0;
				if(midput[i][j]!=output[n-1-j][i])
					hash[9]=0;
			}
	if(hash[7]==0&&hash[8]==0&&hash[9]==0)
		hash[5]=0;
	for(t=1;t<7;t++)
		if(hash[t]==1)
			break;
	fprintf(out,"%d\n",t);
	fclose(in);
	fclose(out);
	return 0;
}
