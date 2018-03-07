#include<iostream>
using namespace std;
int main()
{
    long n, m, a;
    cin >> n >> m >> a;
    long na, ma;
    na = (n % a == 0) ? (n / a) : (n / a + 1);
    ma = (m % a == 0) ? (m / a) : (m / a + 1);
    long long aa;
    aa = (long long) na * ma;
    cout << aa << endl;
    return 0;
}
