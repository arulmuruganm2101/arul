#include<stdio.h>
#include<math.h>
#include<malloc.h>
struct node
{
	int data;
	struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;
struct node* createnode(int x)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
};
void insert(int x)
{
	struct node* newnode=createnode(x);
	if(front==NULL)
	{
		front=newnode;
		rear=newnode;
	}
	else
	{
		rear->next=newnode;
		rear=newnode;
	}
}
void del()
{
	if (front==NULL)
	{
		printf("\n\tqueue empty");
		return;
	}
	int t=front->data;
	front=front->next;
	printf("\n\t%d deleted",t);
}
void disp()
{
	if (front==NULL)
	{
		printf("\n\tqueue empty");
		return;
	}
	else
	{
		struct node* temp=front;
		printf("\n\tfront->\t");
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("<-rear");
	}
}
int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	disp();
	del();
	disp();
	
}
