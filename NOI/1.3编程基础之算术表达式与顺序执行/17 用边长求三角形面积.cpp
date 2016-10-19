#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	if(a+b<=c)
		cout<<"Data Error"<<endl;
	else if(a+c<=b)
		cout<<"Data Error"<<endl;
	else if(b+c<=a)
		cout<<"Data Error"<<endl;
	else
		{
			double r=(a+b+c)/2;
			double s = sqrt(r*(r-a)*(r-b)*(r-c));
			printf("%.4lf\n",s);
		}
	return 0;
}
