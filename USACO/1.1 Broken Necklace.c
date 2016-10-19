/*
ID: fx.yoyo1
LANG: C
TASK: beads
*/
#include<stdio.h>
int n;
char s[351]={0};
char data[1050]={0};
int max=0;
int main()
{
    FILE *in,*out;
    in=fopen("beads.in","r");
    out=fopen("beads.out","w");
    int i,j;
    int temp;
    char key;
    fscanf(in,"%d",&n);
    fscanf(in,"%s",s);
    for(i=0;i<n;i++)
    {
        data[i]=s[i];
        data[n+i]=s[i];
        data[2*n+i]=s[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=0,temp=0,key=0;j<n;j++)
        {
            if(data[n+i+j]==data[n+i+j+1]||((data[n+i+j]=='w'&&(data[n+i+j+1]==key&&key!=0))||(data[n+i+j]==key&&(data[n+i+j+1]=='w'&&key!=0))||((data[n+i+j]=='w'||data[n+i+j+1]=='w')&&key==0)))
                {
                    temp++;
                    if(data[n+i+j]!='w')
                        key=data[n+i+j];
                    else if(data[n+i+j+1]!='w')
                        key=data[n+i+j+1];
                }
            else
                break;
        }
        for(j=0,key=0;j<n;j++)
        {
            if(data[n+i-j-1]==data[n+i-j-2]||((data[n+i-j-1]=='w'&&(data[n+i-j-2]==key&&key!=0))||(data[n+i-j-1]==key&&(data[n+i-j-2]=='w'&&key!=0))||((data[n+i-j-1]=='w'||data[n+i-j-2]=='w')&&key==0)))
                {
                    temp++;
                    if(data[n+i-j-1]!='w')
                        key=data[n+i-j-1];
                    else if(data[n+i-j-2]!='w')
                        key=data[n+i-j-2];
                }
            else
                break;
        }
        if(temp>max)
            max=temp;
    }
    max=max+2;
    if(max>n)
        max=n;
    fprintf(out,"%d\n",max);
    fclose(in);
    fclose(out);
    return 0;
}
