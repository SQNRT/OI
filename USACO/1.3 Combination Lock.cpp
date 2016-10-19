/*
ID: fx.yoyo1
LANG: C++ 
TASK: combo
*/
#include<iostream>
#include<cstdio>
using namespace std;
int com[2][3]={0};
bool hash[100][100][100]={0};
int main()
{
	FILE *in,*out;
	in=fopen("combo.in","r");
	out=fopen("combo.out","w");
	int n;
	int c=0;
	fscanf(in,"%d",&n);
	fscanf(in,"%d%d%d",&com[0][0],&com[0][1],&com[0][2]);
	fscanf(in,"%d%d%d",&com[1][0],&com[1][1],&com[1][2]);
	for(int i=0;i<2;i++)
		for(int j=(com[i][0]-2+n)%n;j!=(com[i][0]+3+n)%n;j=(j+1)%n)
			for(int k=(com[i][1]-2+n)%n;k!=(com[i][1]+3+n)%n;k=(k+1)%n)
				for(int l=(com[i][2]-2+n)%n;l!=(com[i][2]+3+n)%n;l=(l+1)%n)
					hash[j][k][l]=1; 
	for(int i=0;i<100;i++)
		for(int j=0;j<100;j++)
			for(int k=0;k<100;k++)
				if(hash[i][j][k]==1)
					c++;
	if(n<=5)
		c=n*n*n;
	fprintf(out,"%d\n",c);
	fclose(in);
	fclose(out);
	return 0;
}
