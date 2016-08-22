#include<stdio.h>
int main()
{
	int a[50000],m,p=0,i;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		if(a[i]==0 && i!=0)
		{
		 if(a[i+1]==0)
		 {
		 	a[i-2]=0;
		 }
		 a[i-1]=0;
		}
	}
	for(i=0;i<m;i++)
	{
		p=p+a[i];
	}
	printf("%d",p);
	return 0;
	
}
