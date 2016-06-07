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
void print()
{
	struct node* print=head;
	while(print!=NULL)
	{
		printf("%d ",print->data);
		print=print->next;
	}
}
int getcount(struct node* head)
{
	if(head==NULL)
	{
		return 0;
	}
	return 1 + getcount(head->next);
}
void insert(int data);
void print();
int getcount(struct node* head);
int main()
{
	insert(1);
	insert(2);
	insert(1);
	insert(2);
	insert(1);
	insert(2);
	print();
	printf("\n");
	int count=getcount(head);
	printf("the count is :%d ",count);
}

