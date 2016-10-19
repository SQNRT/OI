/*
ID: fx.yoyo1
LANG: C
TASK: ride
*/
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *in,*out;
    in=fopen("ride.in","r");
    out=fopen("ride.out","w");
    char ufo[16]={0};
    char group[16]={0};
    int l1=0,l2=0;
    long int a=1,b=1;
    int i;
    fscanf(in,"%s",ufo);
    fscanf(in,"%s",group);
    l1=strlen(ufo);
    l2=strlen(group);
    for(i=0;i<l1;i++)
        a*=ufo[i]-64;
    for(i=0;i<l2;i++)
        b*=group[i]-64;
    a=a%47;
    b=b%47;
    if(a==b)
        fprintf(out,"GO\n");
    else
        {fprintf(out,"STAY\n");}
    fclose(in);
    fclose(out);
    return 0;
}
