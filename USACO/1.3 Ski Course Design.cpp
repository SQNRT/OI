/*
ID: fx.yoyo1
LANG: C++ 
TASK: skidesign
*/
#include<iostream>
#include<cstdio>
using namespace std;
int n;
int h[1000]={0};
int qs(int left,int right)
{
	int i=left,j=right,mid=h[(i+j)/2];
	int t;
	do
	{
		while(h[i]<mid&&i<right) i++;
		while(mid<h[j]&&left<j) j--;
		if(i<=j)
		{
			t=h[i];
			h[i]=h[j];
			h[j]=t;
			i++;j--;
		}
	}while(i<=j);
	if(left<j) qs(left,j);
	if(i<right) qs(i,right);
}
int main()
{
	FILE *in,*out;
	in=fopen("skidesign.in","r");
	out=fopen("skidesign.out","w");
	fscanf(in,"%d",&n);
	for(int i=0;i<n;i++)
		fscanf(in,"%d",&h[i]);
	qs(0,n-1);
	long int min=100000000;
	long int value=0;
	for(int i=h[0];i<h[n-1]-17;i++)
	{
		value=0;
		int j=0;
		for(;h[j]<i;j++)
			value+=(i-h[j])*(i-h[j]);
		while(h[j]<=i+17)
			j++;
		for(;j<n;j++)
			value+=(h[j]-i-17)*(h[j]-i-17);
		if(value<min)
			min=value;
	}
	if(min==100000000)
		min=0;
	fprintf(out,"%ld\n",min);
	fclose(in);
	fclose(out);
	return 0;
}
