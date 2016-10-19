#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int l,r;
	long int sum=0;
	cin>>l>>r;
	for(int i=l;i<=r;i++)
	{
		if(i/10000==2)
			sum++;
		if(i/1000%10==2)
			sum++;
		if(i/100%10==2)
			sum++;
		if(i/10%10==2)
			sum++;
		if(i%10==2)
			sum++;
	}
	cout<<sum<<endl;
	return 0;
}
