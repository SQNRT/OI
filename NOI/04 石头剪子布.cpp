#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[2][10]={0};
	char f[3][10]={"Rock","Scissors","Paper"};
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[0]>>s[1];
		for(int j=0;j<3;j++)
		{
			if(strcmp(s[0],s[1])==0)
			{
				cout<<"Tie"<<endl;
				break;
			}
			else if(strcmp(s[0],f[j])==0&&strcmp(s[1],f[(j+1)%3])==0)
			{
				cout<<"Player1"<<endl;
				break;
			}
			else if(strcmp(s[0],f[j])==0&&strcmp(s[1],f[(j+2)%3])==0)
			{
				cout<<"Player2"<<endl;
				break;
			}
		}
	}
	return 0;
}
