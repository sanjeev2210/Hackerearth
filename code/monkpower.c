#include<stdio.h>
int main()
{
	int a[100],b[100],i,j,m,count=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	while(m!=0)
	{
		if(a[0]==b[0])
		{
			for(j=0;j<m;j++)
			{
				a[j]=a[j+1];
				b[j]=b[j+1];
			}
			m--; 
			count++;
		}
		else
		{
			int temp;
			j=0;
			temp=a[j];
			for(j=0;j<m-1;j++)
			{
				a[j]=a[j+1];
			}
			a[j]=temp;
			count++;
		}
}
	printf("%d",count);
	return 0;
}
