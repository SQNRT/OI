/*
ID: fx.yoyo1
LANG: C++ 
TASK: dualpal
*/
#include<iostream>
#include<cstdio>
using namespace std;
char data[100]={0};
void base(int x,int b)
{
	long int xs=x*x;
	data[0]=1;
	while(x!=0)
	{
		data[data[0]]=x%b;
		x=x/b;
		data[0]++;
	}
	data[0]--;
	return;
}
int pal()
{
	int flag=1;
	for(int i=1;i<=data[0]/2;i++)
		if(data[i]!=data[data[0]-i+1])
		{
			flag=0;
			break;
		}
	if(flag)
		return 1;
	else
		return 0;
}
int main()
{
	FILE *in,*out;
	in=fopen("dualpal.in","r");
	out=fopen("dualpal.out","w");
	int n,s;
	fscanf(in,"%d%d",&n,&s);
	for(int i=s+1,c=0;c<n;i++)
	{
		int flag=0;
		for(int j=2;j<=10;j++)
		{
			base(i,j);
			if(pal())
				flag++;
		}
		if(flag>1)
		{
			fprintf(out,"%d\n",i);
			c++;
		}
	}
	fclose(in);
	fclose(out);
	return 0;
}
