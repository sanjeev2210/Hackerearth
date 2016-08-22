#include<bits/stdc++.h>
using namespace std;
	int main()
	{
	int a,b,count=0,i,j;
	cin>>a>>b;
	char ad[a][b];
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>ad[i][j];
		}
	}

	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(ad[i][j]=='C' || ad[i][j]=='M' || ad[i][j]=='Y')
			{
				count++;
			}
		}
	}
	if(count==1)
	{
		cout<<"#Black&White";
	}
	else
	{
		cout<<"#Color";
	}
	return 0;
	
	}
