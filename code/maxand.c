#include<stdio.h>
int main()
{
	int i,j,k,m,n;
	long long int p,q,r=0;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d %d",&p,&q);
		for(j=p;j<=q;j++)
		{
			for(k=p+1;k<=q;k++)
			{
				n = (j & k);
				if(n>r)
				{
					r=n;
				}
			}
		}
		printf("%d",r);
	}
	return 0;
}
