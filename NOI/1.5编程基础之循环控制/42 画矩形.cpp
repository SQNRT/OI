#include<iostream>
using namespace std;
int main()
{
	int h,w;
	char s;
	int p;
	cin >> h >> w >> s >> p;
	for(int i=1;i<=h;i++)
	{
		if(i==1 || i==h || p==1)
			for(int j=1;j<=w;j++)
				cout<<s;
		else
		{
			cout<<s;
			for(int j=2;j<w;j++)
				cout<<" ";
			cout<<s;
		}
		cout<<endl;
	}
	return 0;
}
