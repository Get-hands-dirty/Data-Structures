#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
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
void del(int data)
{
	struct node* prev;
	struct node* temp=head;
	if(temp!=NULL && temp->data==data)
	{
		head=temp->next;
		return;
	}
	while(temp!=NULL&&temp->data!=data)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;
	free(temp);
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
void del(int data);
void insert(int data);
int main()
{
	insert(1);
	insert(2);
	insert(3);
	printf("Before Deletion \n");	
	print();
	printf("\n");
	printf("After Deletion \n");
	del(2);
	print();
}
