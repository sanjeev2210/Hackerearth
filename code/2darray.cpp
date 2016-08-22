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
cout<<"\n";
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{ 
		  cout<<ad[i][j]<<" ";
	}
	cout<<"\n";
}
cout<<"\n";
for(i=0;i<b;i++)
	{
		for(j=0;j<a;j++)
		{ 
		  cout<<ad[j][i]<<" ";
	}
	cout<<"\n";
}
}
