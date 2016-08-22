#include<stdio.h>
int main()
{
	int n,j,i,t,count=0;
	long int a[100000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{ 
	  count=0;
	  scanf("%d",&n);
	  for(j=0;j<n;j++)
	  {
	  	scanf("%d",&a[j]);
	  }	
	  for(j=0;j<n;j++)
	  {
	  	if(a[j] <= a[j-1] &&  j!=0 )
	  	{
	  		count++;
		}
	  }
	  printf("%d\n",count+1);
	
	}
	return 0;
}
