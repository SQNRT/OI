#include<iostream>
using namespace std;
int main()
{
	int n;
	unsigned long int res=1;
	cin>>n;
	for(int i=0;i<n;i++)
		res*=2;
	cout<<res<<endl;
	return 0;
}
