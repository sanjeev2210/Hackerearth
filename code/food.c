#include<stdio.h>
int main()
{
	int q,n,m,i;
	int r1=0;
	int a[100005];
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d",&n);
		if(n==1)
		{
		 if(r1==0)
		 {
			 printf("No Food\n");
		}
		 else
		 {
		 	printf("%d\n",a[r1]);
			 r1=r1-1;	
		 }
		}
		else
		{
		scanf("%d\t",&m);
		r1=r1+1;
		a[r1]=m;
		}
		
	}
}
