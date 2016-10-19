#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long int sum=0;
	int r=0;
	bool flag=0;
	for(int i=1,a;i<=12;i++)
	{
		cin>>a;
		if((300-a+r)/100>=0)
		{
			sum+=(300-a+r)/100*100;
			r+=300-(300-a+r)/100*100-a;
		}
		if((300-a+r)/100<0||r<0)
		{
			cout<<-i<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<sum*1.2+r<<endl;
	return 0;
}
