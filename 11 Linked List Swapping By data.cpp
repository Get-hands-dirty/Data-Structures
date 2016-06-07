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
void swap(int x,int y)
{
struct node *xp=head;

struct node *yp=head;

while(xp->data!=x)

xp=xp->next;

while(yp->data!=y)

yp=yp->next;

int pol=xp->data;

int sol=yp->data;

xp->data=sol;

yp->data=pol;
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
    printf("after swapping : \n");
	swap(2,4);
	print();
}
