#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
int count=0;
void insert(int data)
{
	struct node* temp=(node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=head;
	head=temp;
}
int counter()
{
	struct node* temp=head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
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
void insert(int data);
int counter();
void print();
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	print();
	printf("\n ");
	count=counter();
	printf("count is : %d",count);
}
