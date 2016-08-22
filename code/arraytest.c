#include<stdio.h>
int main()
{
	int a[5]={1,2,3};
	int b[5]={4,5,6};
	*a=&b;
	printf("%d",a[2]);
	return 0;
}
