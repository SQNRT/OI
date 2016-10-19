#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	float x1,x2,x3,y1,y2,y3;
	double a,b,c;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	/*if(a+b<=c)
		cout<<"0"<<endl;
	else if(a+c<=b)
		cout<<"0"<<endl;
	else if(b+c<=a)
		cout<<"0"<<endl;
	else
		{*/
			double r=(a+b+c)/2;
			double s = sqrt(r*(r-a)*(r-b)*(r-c));
			printf("%.2lf\n",s);
	//	}
	return 0;
}
