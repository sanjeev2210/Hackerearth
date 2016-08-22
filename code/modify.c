  #include <stdio.h>

int main()
{
  int n,i,j,k,p,q;
  int a[109];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  	scanf("%d",&a[i]);
  }
  j=0;
  k=1;
  while(j<n)
  {
  	p=p+a[i];
  	i=i+2;
  }
  while(k<n)
  {
  	q=q+a[i];
  	i=i+2;
  }
  if(p==q)
  {
  	printf("YES");
  }
  else
  {
  	printf("NO");
  }
  return 0;
}

