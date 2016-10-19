/*
ID: fx.yoyo1
LANG: C++ 
TASK: milk
*/
#include<iostream>
#include<cstdio>
using namespace std;
long int f[5000][2]={0};
void qs(int left,int right)
{
	long int i=left,j=right,mid=f[(i+j)/2][0];
	long int t;
	do
	{
		while(f[i][0]<mid) i++;
		while(f[j][0]>mid) j--;
		if(i<=j)
		{
			t=f[i][0];
			f[i][0]=f[j][0];
			f[j][0]=t;
			t=f[i][1];
			f[i][1]=f[j][1];
			f[j][1]=t;
			i++;j--;
		}
	}while(i<j);
	if(left<j) qs(left,j);
	if(i<right) qs(i,right);
}	
int main()
{
	FILE *in,*out;
	in=fopen("milk.in","r");
	out=fopen("milk.out","w");
	long int n;
	int m;
	long int c=0;
	fscanf(in,"%ld%d",&n,&m);
	for(int i=0;i<m;i++)
		fscanf(in,"%d%ld",&f[i][0],&f[i][1]);
	qs(0,m-1);
	for(int i=0;n>0,i<m;i++)
	{
		if(n>f[i][1])
		{
			n-=f[i][1];
			c+=f[i][0]*f[i][1];
		}
		else
		{
			c+=f[i][0]*n;
			break;
		}
	}
	fprintf(out,"%ld\n",c);
	fclose(in);
	fclose(out);
	return 0;
}
