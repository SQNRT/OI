/*
ID: fx.yoyo1
LANG: C++ 
TASK: palsquare
*/
#include<iostream>
#include<cstdio>
using namespace std;
int b;
char data[100][2]={0};
void base(int x)
{
	long int xs=x*x;
	data[0][0]=1;
	data[0][1]=1;
	while(x!=0)
	{
		data[data[0][0]][0]=x%b;
		x=x/b;
		data[0][0]++;
	}
	while(xs!=0)
	{
		data[data[0][1]][1]=xs%b;
		xs=xs/b;
		data[0][1]++;
	}
	data[0][0]--;
	data[0][1]--;
	return;
}
int pal()
{
	int flag1=1,flag2=1;
	/*for(int i=1;i<=data[0][0]/2;i++)
		if(data[i][0]!=data[data[0][0]-i+1][0])
		{
			flag1=0;
			break;
		}*/
	for(int i=1;i<=data[0][1]/2;i++)
		if(data[i][1]!=data[data[0][1]-i+1][1])
		{
			flag2=0;
			break;
		}
	if(flag1&&flag2)
		return 1;
	else
		return 0;
}
int main()
{
	FILE *in,*out;
	in=fopen("palsquare.in","r");
	out=fopen("palsquare.out","w");
	fscanf(in,"%d",&b);
	for(int i=1;i<=300;i++)
	{
		base(i);
		if(pal())
		{
			for(int j=data[0][0];j>=1;j--)
			{
				if(data[j][0]>=10)
					fprintf(out,"%c",data[j][0]-10+'A');
				else
					fprintf(out,"%c",data[j][0]+'0');
			}
			fprintf(out," ");
			for(int j=data[0][1];j>=1;j--)
			{
				if(data[j][1]>=10)
					fprintf(out,"%c",data[j][1]-10+'A');
				else
					fprintf(out,"%c",data[j][1]+'0');
			}
			fprintf(out,"\n");
		}
	}
	fclose(in);
	fclose(out);
	return 0;
}
