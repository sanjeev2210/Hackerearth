#include <stdio.h>
int main()
{ 
   int x,y,i;
   int z[1000]; 
   scanf("%d",&y);
   for(i=0;i<y;i++)
   {
   	scanf("%d",&z[i]);
   }
   for(i=0;i<y;i++)
   {
   x=count_one(z[i]);
   printf("%d",x);
   }
   return 0;
}
int count_one(int n)
{  int count=0;
    while(n)
    {
        n = n & (n-1);
        count++;
    }
    return count;
}

