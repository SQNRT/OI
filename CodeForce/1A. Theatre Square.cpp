#include<iostream>
using namespace std;
int main()
{
	long int n, m;
	long int a;
	long int r, c;
	long long result;
	cin >> n >> m >> a;
	if(n % a == 0)
		r = n/a;
	else
		r = n/a + 1;
	if(m % a == 0)
		c = m/a;
	else
		c= m/a + 1;
	result = (long long)r * c;
	cout << result << endl;
	return 0;
}
