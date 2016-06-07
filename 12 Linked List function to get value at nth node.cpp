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
int getnode(int n)
{
	int value;
	struct node* temp=head;
	int count=1;
	while(temp!=NULL)
	{
		temp=temp->next;
		count++;
		if(count==n)
		{
		value =temp->data;
		}
	}
	return value;
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
void print();
int getnode(int n);
void insert(int data);
int main()
{
	insert(1);
	insert(6);
	insert(8);
	insert(7);
	insert(2);
	print();
	printf(" \n ");
	int data=getnode(5);
	printf("the value at the given node %d ",data);
}
