#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
void insert(int data ,int position)
{
	struct node* temp=(node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	if(position==1)
	{
		temp->next=head;
		head=temp;
		return;
	}
	struct node* temp2=head;
	for(int i=0;i<position-2;i++)
	{
		temp2=temp2->next;
	}
	temp->next=temp2->next;
	temp2->next=temp;
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
void insert(int data,int position);
void print();
int main()
{
	head=NULL;
	insert(1,1);
	insert(2,2);
	insert(3,3);
	insert(4,4);
	insert(5,5);
	print();	
	printf("\n");
	int place,value;
	printf("enter value \n");
	scanf("%d",&value);
	printf("enter position \n");
	scanf("%d",&place);
	insert(value,place);
	printf("after inserting \n");
	print();
}
