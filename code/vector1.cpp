#include<bits/stdc++.h>
using namespace std;
	int main()
	{int i;
	 list <int> l;
	 list<int>::iterator it;
	 for(i=1;i<6;i++)
	 { if(i%2==0)
	    l.push_back(i);
	   else
	 l.push_front(i);
     }
     for(it=l.begin();it!=l.end();it++)
	 {
	 	cout<<*it<<' ';
	 }
	 l.remove(5);
	 cout<<"\n";
	 l.reverse();
     while(!l.empty())
     {
     	cout<<l.back()<<' ';
     	l.pop_back();
	 }
	 
	return 0;	
	}
