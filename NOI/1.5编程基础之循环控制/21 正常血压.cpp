#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	int a,b;
	int c=0;
	int max=0;
	cin>>n;
	for(int i=0,a;i<n;i++)
	{
		cin>>a>>b;
		if(((90<=a)&&(a<=140))&&((60<=b)&&(b<=90)))
			c++;
		else
		{
			if(c>max)
				max=c;
			c=0;
		}
	}
	if(c>max)
		max=c;
	cout<<max<<endl;
	return 0;
}
