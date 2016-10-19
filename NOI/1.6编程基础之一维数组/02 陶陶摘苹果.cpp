#include<iostream>
using namespace std;
int main()
{
	int h;
	int c=0;
	int t[10];
	for(int i=0;i<10;i++)
		cin>>t[i];
	cin>>h;
	for(int i=0;i<10;i++)
		if(t[i]<=h+30)
			c++;
	cout<<c<<endl;
	return 0;
}
