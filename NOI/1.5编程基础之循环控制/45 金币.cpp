#include<iostream>
using namespace std;
int main()
{
	int day;
	int n=1,n_count=0;
	unsigned long int res=0;
	cin >> day;
	for(int i=1;i<=day;i++)
	{
		res += n;
		n_count++;
		if(n_count == n)
		{
			n_count = 0;
			n++;
		}
	}
	cout << res << endl;
	return 0;
}
