#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert(int n);
void print();
struct node{
	int data;
	struct node* next;
};
struct node* head;
int main()
{
	printf("enter the number of elements :");
	int n,value;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&value);
		insert(value);
	}
	print();
}
void insert(int n)
{
	struct node* temp=(node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->next=head;
	head=temp;
}
void print()
{
	struct node* temp;
	printf("the Linked list is:");
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
