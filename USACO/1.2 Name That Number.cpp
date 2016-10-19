/*
ID: fx.yoyo1
LANG: C++ 
TASK: namenum
*/
#include<iostream>
#include<cstdio>
#include<cstring>
int main()
{
	FILE *in,*out,*fp;
	in=fopen("namenum.in","r");
	out=fopen("namenum.out","w");
	fp=fopen("dict.txt","r");
	char s[12]={0};
	char ss[12]={0};
	int l=0;
	int flag=0;
	fscanf(in,"%s",&s);
	l=strlen(s);
	for(int i=0;i<l;i++)
		s[i]-='0';
	for(int i=0,f;i<4617;i++)
	{
		fscanf(fp,"%s",&ss);
		f=1;
		for(int j=0;j<l;j++)
		{
			switch(s[j])
			{
				case 2:
					if(ss[j]!='A'&&ss[j]!='B'&&ss[j]!='C')
						f=0;
					break;
				case 3:
					if(ss[j]!='D'&&ss[j]!='E'&&ss[j]!='F')
						f=0;
					break;
				case 4:
					if(ss[j]!='G'&&ss[j]!='H'&&ss[j]!='I')
						f=0;
					break;
				case 5:
					if(ss[j]!='J'&&ss[j]!='K'&&ss[j]!='L')
						f=0;
					break;
				case 6:
					if(ss[j]!='M'&&ss[j]!='N'&&ss[j]!='O')
						f=0;
					break;
				case 7:
					if(ss[j]!='P'&&ss[j]!='R'&&ss[j]!='S')
						f=0;
					break;
				case 8:
					if(ss[j]!='T'&&ss[j]!='U'&&ss[j]!='V')
						f=0;
					break;
				case 9:
					if(ss[j]!='W'&&ss[j]!='X'&&ss[j]!='Y')
						f=0;
					break;
			}
		}
		if(f==1&&strlen(ss)==l)
			{
				flag=1;
				fprintf(out,"%s\n",ss);
			}
	}
	if(flag==0)
		fprintf(out,"NONE\n");
	fclose(in);
	fclose(out);
	fclose(fp);
	return 0;
}
