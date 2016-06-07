#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* insert(struct node* head,int data)
{
	struct node* temp=(node*)malloc(sizeof(struct node));
    temp->data=data;
	temp->next=head;
	head=temp;
	return head;	
}
struct node* reverse(struct node* head)
{
	struct node* temp=head;
	struct node* current;
	struct node* prev=NULL;
	struct node* next;
	
	while(current != NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}	
	head=prev;
	return head;
}
void print(struct node* head)
{
	struct node* print=head;
	while(print!=NULL)
	{
		printf("%d " ,print->data);
		print=print->next;
	}
}
struct node* insert(struct node* head,int data);
struct node* reverse(struct node* head);
void print(struct node* head);
int main()
{
	struct node* head=NULL;
	head=insert(head,1);
	head=insert(head,2);
	head=insert(head,3);
	head=insert(head,4);
	head=insert(head,5);
	head=insert(head,6);
	head=reverse(head);
	printf("After Reversing \n");
	print(head);
}
