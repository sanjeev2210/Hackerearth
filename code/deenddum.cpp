#include<bits/stdc++.h>
using namespace std;
	int main()
	{
		int a,i,b,k,c,arr[50];
		string s;
		cin>>a;
		cin>>b>>s;
		for(i=0;i<b;i++){
			cin>>arr[i];
		}
		for(i=0;i<b;i++)
		{
			if(s=="Dee")
			{  k=arr[i]%2;
			     if(b==1)
			{
			  if(k==0)
			  {
			  	cout<<"Dee";
			  }
			  }
			  else
			  {
			  	cout<<"Dum";
			  }
  
		}
	
		else
		{
		k=arr[i]%2;
		if(k==0)
		{
			cout<<"Dum";
			}	
		
		else
		{
		s="Dee";	
		}
	}
}
}
	
