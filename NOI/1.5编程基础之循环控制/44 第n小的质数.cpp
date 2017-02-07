#include<iostream>
using namespace std;
long int sstable[6000000]={0};
long int x=0;
int checkss(long int num)
{
	int i;
	for(i=0;sstable[i]*sstable[i]<=num&&i<x;i++)
		if(sstable[i]==0)
			return 1;
		else if(num%sstable[i]==0)
			return 0;
	return 1;
}
int main()
{
	long int a=1,b=1e8;
	long int i;
	int n;
	cin >> n;
	for(i=a;i<=b;i++)
	{
		if(i<2)
			continue;
		if(checkss(i)==1)
		{
			sstable[x++]=i;
			if(x == n)
			{
				cout << sstable[x-1] << endl;
				break;
			}
		}
	}
	return 0;
}

