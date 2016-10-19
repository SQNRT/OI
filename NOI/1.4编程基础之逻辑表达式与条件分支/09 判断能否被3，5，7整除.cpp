#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long int n;
	int hash[3]={0};
	int c=0;
	cin>>n;
	if(n%3==0)
		{
			hash[c]=3;
			c++;
		}
	if(n%5==0)
		{
			hash[c]=5;
			c++;
		}
	if(n%7==0)
		{
			hash[c]=7;
			c++;
		}
	if(c==0)
		cout<<"n"<<endl;
	else if(c==1)
		cout<<hash[0]<<endl;
	else if(c==2)
		cout<<hash[0]<<" "<<hash[1]<<endl;
	else
		cout<<hash[0]<<" "<<hash[1]<<" "<<hash[2]<<endl;
	return 0;
}
