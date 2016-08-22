#include<stdio.h>
struct node
{
	int data,count;
	struct node *next;
	struct node *prev;
	
};
struct node *head=NULL;
int main()
{
	int i,j,k=1,p,q;
	struct node *ptr,*ptr1,*ptr2,*start,*end,*newstart;
	scanf("%d",&i);
	while(i>0)
	{
		scanf("%d",&j);
		ptr=(struct node *)malloc(sizeof(struct node ));
		ptr->data=j;
		ptr->count=k++;
		if(head==NULL)
		{
			ptr->next=ptr;
			ptr->prev=ptr;
			head=ptr;			
		}
		else
		{
			ptr1=head;
			while(ptr1->next!=head)
			{
				ptr1=ptr1->next;
			}
			ptr1->next=ptr;
			ptr->prev=ptr1;
			ptr->next=head;
			head->prev=ptr;
		}
		i--;
	}
	/*ptr2=head;
	while(ptr2->prev!=head)
	{
printf("%d  %d\n",ptr2->data,ptr2->count);
		ptr2=ptr2->prev;
	}
	printf("%d  %d\n",ptr2->data,ptr2->count);*/
	scanf("%d %d",&p,&q);
	while(1)
	{ptr=head;
		while(ptr->count!=p)
		{
			ptr=ptr->next;
		}
		start=ptr;
		ptr1=ptr;
		while(ptr->count!=q)
		{
			sum=sum+ptr->data;
			ptr=ptr->next
		}
		int o=sum;
		end=ptr;
		while(ptr1->prev!=q){
		
		ptr1=ptr1->prev;
		o=ptr1->data*2+sum;
		if(sum<o)
		sum=0;
	}
}
