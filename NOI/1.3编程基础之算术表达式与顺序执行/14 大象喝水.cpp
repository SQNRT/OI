#include<iostream>
#include<cstdio>
#define pi 3.14159
using namespace std;
int main()
{
	int h,r;
	int res;
	cin>>h>>r;
	res=20/(pi*r*r*h/1000)+1;
	printf("%d\n",res);
	return 0;
}
