/*
ID: fx.yoyo1
LANG: C++ 
TASK: crypt1
*/
#include<iostream>
#include<cstdio>
using namespace std;
int hash[10]={0};
int main()
{
	FILE *in,*out;
	in=fopen("crypt1.in","r");
	out=fopen("crypt1.out","w");
	int n;
	int w,x,y,z;
	long int c=0;
	fscanf(in,"%d",&n);
	for(int i=0,t=0;i<n;i++)
	{
		fscanf(in,"%d",&t);
		hash[t]=1;
	}
	for(int i=1,t=0;i<10;i++)
	{
		if(hash[i]==0)
			continue;
		for(int j=1;j<10;j++)
		{
			if(hash[j]==0)
				continue;
			for(int k=1;k<10;k++)
			{
				if(hash[k]==0)
					continue;
				for(int l=1;l<10;l++)
				{
					if(hash[l]==0)
						continue;
					for(int m=1;m<10;m++)
					{
						if(hash[m]==0)
							continue;
						t=(100*i+10*j+k)*l;
						x=t/100;
						y=t/10%10;
						z=t%10;
						if(hash[x]==0||hash[y]==0||hash[z]==0||x>10)
							continue;
						t=(100*i+10*j+k)*m;
						x=t/100;
						y=t/10%10;
						z=t%10;
						if(hash[x]==0||hash[y]==0||hash[z]==0||x>10)
							continue;
						t=(100*i+10*j+k)*m+(100*i+10*j+k)*l*10;
						w=t/1000;
						x=t/100%10;
						y=t/10%10;
						z=t%10;
						if(hash[x]==1&&hash[y]==1&&hash[z]==1&&hash[w]==1)
							c++;
					}
				}
			}
		}
	}
	fprintf(out,"%d\n",c);
	fclose(in);
	fclose(out);
	return 0;
}
