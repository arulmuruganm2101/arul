#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct table
{
	int size;
	struct node** t;
};
struct node* createnode(int x)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
};
struct table* createtable(int size)
{
	struct table* ht=(struct table*)malloc(sizeof(struct table));
	ht->size=size;
	ht->t=(struct node**)malloc(size*sizeof(struct node*));
	int i;
	for (i=0;i<size;i++)
	{
		ht->t[i]=NULL;
	}
	return ht;
}
int hashfun(struct table* ht,int x)
{
	return x%ht->size;
}
void insert(struct table* ht,int x)
{
	int index=hashfun(ht,x);
	struct node* newnode=createnode(x);
	if (ht->t[index]==NULL)
	{
		ht->t[index]=newnode;
	}
	else
	{
		struct node* temp=ht->t[index];
		while(temp->next!=NULL)
			temp=temp->next;
		temp->next=newnode;
	}
	printf("\n\tinserted %d at index %d",x,index);
}
void del(struct table* ht,int x)
{
	int index=hashfun(ht,x);
	struct node* temp=ht->t[index];
	struct node* prev=NULL;
	while(temp!=NULL)
	{
		if(temp->data==x)
		{
			if(prev==NULL)
				ht->t[index]=temp->next;
			else
				prev->next=temp->next;
			free(temp);
			printf("\n\telement %d is deleted from index %d\n",x,index);
			return;
		}
		prev=temp;
		temp=temp->next;
	}
	printf("\n\telement %d is not found to delete\n",x);
}
void search(struct table*ht,int x)
{
	int index=hashfun(ht,x);
	struct node* temp=ht->t[index];
	while(temp!=NULL)
	{
		if(temp->data==x)
		{
			printf("\n\tthe value %d is available at %d index",x,index);
			return;
		}
		temp=temp->next;
	}
	printf("\n\tthe value %d is not found",x);
}
void display(struct table* ht)
{
	int i;
	printf("\n\ttable contents\n");
	for(i=0;i<ht->size;i++)
	{
		printf("[%d] ->",i);
		struct node* temp=ht->t[i];
		while(temp!=NULL)
		{
			printf("\t%d ->",temp->data);
			temp=temp->next;
		}
		printf("NULL\n");
	}
}
int main()
{
	int size,x,i;
	printf("\n\thash table using separate chaining");
	printf("\n\tenetr the size of hash table");
	scanf("%d",&size);
	struct table*ht=createtable(size);
	printf("\n\t1 for insert \n\t2 for delete\n\t3 for search\n\t4 for display\n\t5 for exit");
	while(1)
	{
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				printf("\n\tenter value");
				scanf("%d",&x);
				insert(ht,x);
				break;
			case 2:
				printf("\n\tenter value");
				scanf("%d",&x);
				del(ht,x);
				break;
			case 3:
				printf("\n\tsearching a value\n\tenter value to search");
				scanf("%d",&x);
				search(ht,x);
				break;
			case 4:
				printf("\n\tdisplay");
				display(ht);
				break;
			case 5:
				exit(0);
			default:
				printf("\n\tinvalid choice enter correct choice");
				break;
		}
		printf("\n\tenter your choice");
	}
}

