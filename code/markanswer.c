#include<stdio.h>
int main()
{
	int n,count=0,r=0,i;
	long long int a[100000],x;
	scanf("%d %d",&n,&x);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{	if(r<2)
		{
		if(a[i]<=x)
		{
			count++;
		}
		else
		{
			r++;
		}
	}	
	else
	{
		break;
	}
	}
	printf("%d",count);
	return 0;
}
