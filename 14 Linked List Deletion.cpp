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
void del()
{
	struct node* temp=head;
	struct node* next;
	while(temp!=NULL)
	{
		next=temp->next;
		free(temp);
		temp=next;
	}
	head=NULL;
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
void del();
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
printf("\n after deletion");
del();
print();
	
}
