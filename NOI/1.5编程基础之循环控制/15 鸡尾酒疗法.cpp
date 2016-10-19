#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	double haart;
	double a,b;
	cin>>n;
	cin>>a>>b;
	haart=b/a;
	for(int i=1;i<n;i++)
	{
		cin>>a>>b;
		if(b/a-haart>0.05)
			cout<<"better"<<endl;
		else if(haart-b/a>0.05)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;
	}
	return 0;
}
