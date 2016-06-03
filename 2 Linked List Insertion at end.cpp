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
	head=NULL;
	insert(1);
	insert(2);
	insert(3);
	insert(4);
		insert(4);
			insert(4);
				insert(4);
					insert(4);
						insert(4);
						
	print();
	
}
void insert(int n)
{
	struct node* temp=(node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->next=NULL;
	if(head==NULL)
	{	
	    temp->next=head;
		head=temp;
		return;
    }
    struct node* temp2=head;
    while(temp2->next!=NULL)
    {
    	temp2=temp2->next;
	}
    temp2->next=temp;
}
void print()
{
	struct node* print=head;
	while(print->next!= NULL)
	{
		printf("%d ",print->data);
		print=print->next;
	}
}
