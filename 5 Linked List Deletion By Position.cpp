#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
void insert(int data)
{
	struct node* temp=(node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=head;
	head=temp;
}
void del(int position)
{
	struct node* temp=head;
	struct node* temp2;
	if(position==1)
	{
		head=temp->next;
		free(temp);
		return;
	}
	for(int i=0;i<position-2;i++)
	{
		temp=temp->next;
	}
	temp2=temp->next;
	temp->next=temp2->next;
	free(temp2);
}
void print()
{
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void insert(int data);
void del(int position);
void print();
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	printf("before deletion: \n");
	print();
	printf("\n");
int pos;
printf("enter the position to delete :\n");
   scanf("%d",&pos);
   del(pos);
   	printf("after deletion : \n");
	print();
}
