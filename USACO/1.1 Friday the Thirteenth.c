/*
ID: fx.yoyo1
LANG: C
TASK: friday
*/
#include<stdio.h>
int n=0;
int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int week[7]={0};
int main()
{
    FILE *in,*out;
    in=fopen("friday.in","r");
    out=fopen("friday.out","w");
    int i,j,k;
    int l=0;
    fscanf(in,"%d",&n);
    for(i=1900;i<=1900+n-1;i++)
        for(j=1;j<=12;j++)
           {
               if(j==2&&((i%400==0&&i%100==0)||(i%4==0&&i%100!=0)))
                 for(k=1;k<=29;k++,l++)
                    {
                        if(k==13)
                            week[l%7]++;
                    }
               else
                 for(k=1;k<=month[j-1];k++,l++)
                    {
                        if(k==13)
                            week[l%7]++;
                    }
           }
    fprintf(out,"%d ",week[5]);
    fprintf(out,"%d ",week[6]);
    fprintf(out,"%d ",week[0]);
    fprintf(out,"%d ",week[1]);
    fprintf(out,"%d ",week[2]);
    fprintf(out,"%d ",week[3]);
    fprintf(out,"%d\n",week[4]);
    fclose(in);
    fclose(out);
    return 0;
}
