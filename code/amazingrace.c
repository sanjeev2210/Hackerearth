#include<stdio.h>
int main()
{
	int m,n,i,j,k,l,count;
	int tmp,ind;
	long int a[100005],b[100005];
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{	
		scanf("%d",&n);
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[j]);
		}
		j=1;
		while(j<=n)
		{	k=j+1;
			count=0;
			while(k<=n)
			{
				if(a[j]>a[k])
				{
					count++;
				}
				k++;
			}
			l=j-1;
			while(l>=1)
			{
				if(a[j]>a[l])
				{
					count++;
				}
				l--;
			}
			if(j==1)
			{
			tmp=count*j;
		    }
			if(tmp<count*j)
			{
				tmp=count*j;
				ind=j;
			}
			j++;
		}
		printf("%d\n",ind);
	}
	return 0;
}
