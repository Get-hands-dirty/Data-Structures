#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
int mid,count1,count2;
void insert(int data)
{
	struct node* temp=(node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=head;
	head=temp;
}
int middle()
{
	int midvalue;
	 count1=1;
	count2=1;
	struct node* temp1=head;
	while(temp1!=NULL)
	{
		temp1=temp1->next;
		count1++;
	}
	mid=count1/2;
      struct node* temp2=head;
	  while(temp2!=NULL)
	  {
	  	temp2=temp2->next;
	  	count2++;
	  	if(count2==mid)
	  	{
	  	midvalue=temp2->data;	
	    }
	   } 
return midvalue;
}
void print()
{
	struct node* print=head;
	while(print!=NULL)
	{
		printf("%d ",print->data);
		print=print->next;
	}
}
void print();
int middle();
void insert(int data);
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(5);
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	print();
	int m=middle();
	printf("\n the middle node is : %d ",mid);
	printf("\n the middle value is : %d ",m);
	
}
