#include<iostream>
using namespace std;
int main()
{
	long int n,x,y;
	cin >> n >> x >> y;
	n *= x;
	n -= y;
	n /= x;
	if(n<0)
		n = 0;
	cout << n << endl;
	return 0;
}
