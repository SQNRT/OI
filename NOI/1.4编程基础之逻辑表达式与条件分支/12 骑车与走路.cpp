#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int l;
	cin>>l;
	if((27+23+(double)l/3)>(double)(l/1.2))
		cout<<"Walk"<<endl;
	else if((27+23+(double)l/3)<(double)(l/1.2))
		cout<<"Bike"<<endl;
	else
		cout<<"All"<<endl;
	return 0;
}
