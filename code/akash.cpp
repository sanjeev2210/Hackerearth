#include<bits/stdc++.h>
using namespace std;
	int main()
	{
	int a,b,i,q,j,count,m,n,v;
	cin>>a>>b;
	string str;
	cin>>str;
	for(i=1;i<=b;i++)
	{	
		cin>>m>>n>>v;
		if(m==1)
		{
				sort(str.begin(),str.begin()+n);
		}
		else
		{q=m-1;
		sort(str.begin()+q,str.begin()+n);}
	/*	for(j=m;j<=n;j++)
		{
			if(count==v)
			{
				cout<<s[v]<<"\n";
				break;
			}
			count++;
		}*/
		count=m+v-2;
		cout<<str[count]<<"\n";
	}
}
