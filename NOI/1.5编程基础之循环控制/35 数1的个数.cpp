#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	long int sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i/10000==1)
			sum++;
		if(i/1000%10==1)
			sum++;
		if(i/100%10==1)
			sum++;
		if(i/10%10==1)
			sum++;
		if(i%10==1)
			sum++;
	}
	cout<<sum<<endl;
	return 0;
}
