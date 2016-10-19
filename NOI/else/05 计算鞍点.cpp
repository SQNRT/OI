#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int row[6],colume[6];
	memset(row,-128,sizeof(row));
	memset(colume,127,sizeof(colume));

	int t;
	for(int i=1;i<=5;i++)
		for(int j=1;j<=5;j++)
		{
			cin>>t;
			if(t>row[i])
				row[i]=t;
			if(t<colume[j])
				colume[j]=t;
		}
	
	t=0;
	for(int i=1;i<=5;i++)
		for(int j=1;j<=5;j++)
			if(row[i]==colume[j])
			{
				cout<<i<<" "<<j<<" "<<row[i]<<endl;
				t=1;
				break;
			}
	if(t==0)
		cout<<"not found"<<endl;
	return 0;
}
