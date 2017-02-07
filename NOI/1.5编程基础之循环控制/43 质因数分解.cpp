#include<stdio.h>
#include<math.h>
long int n,r;
int pdss()
{
    long int i,j;
    j=sqrt(r);
    for(i=2;i<=j;i++)
       if(r%j==0)
         return 0;
    return 1;
}
int main()
{
    long int m,l;
    long int i;
    scanf("%ld",&n);
    m=sqrt(n);
    for(i=2;i<=m;i++)
       {
          l=n%i;
          r=n/i;
          if((l==0)&&(pdss()==1))
            break;
       }
    printf("%ld\n",r);
    return 0;
}

