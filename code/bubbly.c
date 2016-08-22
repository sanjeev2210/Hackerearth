#include<stdio.h>
#include<string.h>
#define max 100
#define size 10000
int main()
{
	int i,j,count,count1,count2=0,q,n,p;
	char s1[max][size];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s1[i]);
}
	for(i=0;i<n;i++)
	{
		p=strlen(s1[i]);
		for(j=0;j<p;j++)
		{	count=count1=0;
			if(s1[i][j]=='A')
			{
				count++;
			}
			else
			{
				count1++;
			}
		}
		printf("%d",count);
    	if(count%2==0 && count1%2==0)
		{	q=0;
			for(j=0;j<p;j++)
			{
				if(s1[i][j]=='A')
				{ printf("dfS");
					if(s1[i][j+1]=='B')
					{
						if(s1[i][j+1]=='A')
						{
							break;
					    }
					    else
					    {
					    	q=1;
						}
					}
					else
					{
						q=1;
					}
				}	
				else
				{
				  if(s1[i][j+1]=='A')
					{
						if(s1[i][j+1]=='B')
						{
							break;
					    }
					    else
					    {
					    	q=1;
						}
					}
					else
					{
						q=1;
					}	
					
				}		
			}
	    }
	    if(q==1)
	    {
	    	count2++;
		}
	}
	printf("%d\n",count2);
	return 0;
	}
