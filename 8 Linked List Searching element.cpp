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
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
bool findelement(int data)
{
	struct node* temp=head;
	while(temp!=NULL)
	{
	if(temp->data==data)
	{
		return true;
	}
	else
	return false;
}
}
void insert(int data);
void print();
bool findelement(int data);
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(12);
	insert(24);
	insert(36);
	print();
	printf("\n");
	findelement(363)?printf("element found"):printf("element not found");
}
