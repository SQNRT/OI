/*
ID: fx.yoyo1
LANG: C
TASK: gift1
*/
#include<stdio.h>
int np=0;
char name[10][15]={0};
int money[10]={0};
int namecheck(char named[])
{
    int i,j;
    for(i=0;i<np;i++)
        {
            for(j=0;named[j]!=0;j++)
                if(name[i][j]!=named[j])
                  break;
            if(named[j]==0)
               return i;
        }
    return 10;
}
int main()
{
    FILE *in,*out;
    in=fopen("gift1.in","r");
    out=fopen("gift1.out","w");
    int i,j;
    int pay,n;
    int re,tr;
    char named[15]={0};
    fscanf(in,"%d",&np);
    for(i=0;i<np;i++)
        fscanf(in,"%s",name[i]);
    for(i=0;i<np;i++)
    {
        fscanf(in,"%s",named);
        fscanf(in,"%d%d",&pay,&n);
        if(n==0)
        {
            re=pay;
            tr=0;
        }
        else
        {
            re=pay%n;
            tr=(pay-re)/n;
        }
        money[namecheck(named)]-=pay;
        money[namecheck(named)]+=re;
        for(j=0;j<n;j++)
        {
            fscanf(in,"%s",named);
            money[namecheck(named)]+=tr;
        }
    }
    for(i=0;i<np;i++)
        fprintf(out,"%s %d\n",name[i],money[i]);
    fclose(in);
    fclose(out);
    return 0;
}
