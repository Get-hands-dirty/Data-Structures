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
void swap(int data1,int data2)
{
	struct node* temp=head;
	struct node* swap1=NULL;
	struct node* swap2=NULL;
	while(temp&&temp->data!=data1)
	{
		swap1=temp;
		temp=temp->next;		
	}
	struct node* temp2=head;
	while(temp2&& temp2->data!=data2)
	{
		swap2=temp2;	
		temp2=temp2->next;
		
	}
	struct node* temp3;
    temp3=swap2->next;
    swap2->next=swap1->next;
    swap1->next=temp3;
    
    if(swap1!=NULL)
    swap1->next=temp2;
    else 
    head=temp2;
    
    if(swap2!=NULL)
    swap2->next=temp;
    else 
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
void print();
void swap(int ,int);
void insert(int);
int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);

	printf("before swapping : \n");
	print();
	swap(2,3);
	printf("after swapping : \n");
	print();
}
