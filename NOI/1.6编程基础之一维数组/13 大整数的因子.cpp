#include<iostream>
#include<cstring>
using namespace std;
char s[32];
int c[32]={0};
bool data[10]={0};
int main()
{
	int lc;
	cin >> s;
	lc=strlen(s);
	for(int j=2;j<=9;j++)
	{
		memset(c,0,sizeof(c));
		for(int i=0;i<lc;i++)
		{
			c[i] += s[i] - '0';
			c[i+1] += (c[i] % j) * 10;
		}
		if(c[lc-1] % j == 0)
			data[j] = true;
	}
	int temp=0;
	for(int i=2;i<=9;i++)
		if(data[i])
		{
			cout<<i;
			temp = i;
			break;
		}
	if(temp != 0)
	{
		for(int i=temp+1;i<=9;i++)
			if(data[i])
				cout<<" "<<i;
	}
	else
		cout<<"none";
	cout<<endl;
	return 0;
}
