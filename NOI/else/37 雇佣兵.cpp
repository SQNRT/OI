#include<iostream>
using namespace std;
int main()
{
	int m,n,x;
	int tl=0;
	cin>>m>>n>>x;
	while(x>=0)
	{
		if(tl<m)
		{
			x--;
			tl+=n;
		}
		else if(tl==m)
		{
			n+=tl/n;
			tl=0;
		}
		else
		{
			n+=m/n;
			tl=0;
		}
	}
	cout<<n<<endl;
	return 0;
}
