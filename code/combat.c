#include<stdio.h>
int main()
{
	int a[1000],m,n,i,k=0,q=0,j=0,t;
	int b[10000];
	memset(b,0,sizeof(b));
	scanf("%d",&t);
	while(k<t)
	{
	scanf("\n %d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	while(j<n)
	{
		while(q<m)
		{
			if(q!=0 && q!=m-1)
			{
				if(a[q+1]==1 && a[q-1]==1)
				{
				b[q]=1;	
				}
			}
			else if(q==0)
			{
			 if(a[q+1]==1)
			  {
			  	b[q]=1;
			  }
				
			}
			else if(q==m-1)
			{
			 if(a[q-1]==1)
			  {
			  	b[q]=1;
			  }
		    }
		    q++;
	}
	j++;
	 for (i = 0; i < m; i++) {
      a[i] = b[i];
   }
   
   memset(b,0,sizeof(b));
}
k++;
 for (i = 0; i < m; i++) {
      printf("%d",a[i]);
      
   }
   printf("\n");
}
return 0;
}
