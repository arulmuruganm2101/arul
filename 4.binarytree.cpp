#include<stdio.h>
#include<stdlib.h>
#define max 2
int tree[max];
int size=0;
void insert()
{
	if(size>=max)
	{
		printf("\n\ttree full");
		return;
	}
	else
	{
		int x;
		printf("\n\tenter value");
		scanf("%d",&x);
		tree[size]=x;
		printf("\n\tinserted %d",tree[size]);
		size+=1;
	}
}
void del()
{
	int i,x;
	if(size==0)
	{
		printf("\n\ttree is empty");
		return;
	}
	printf("\n\tenter value");
	scanf("%d",&x);
	for (i=0;i<size;i++)
	{
		if(tree[i]==x)
			break;
	}
	if(i==size)
		printf("\n\tvalue not found");
	else
	{
		tree[i]=tree[size-1];
		printf("\n\tdeleted value is %d",x);
		size-=1;
	}
	
}
void search()
{
	int x;
	if(size==0)
	{
		printf("\n\ttree is empty");
		return;
	}
	printf("\n\tenter value");
	scanf("%d",&x);
	for(int i=0;i<size;i++)
	{
		if (x==tree[i])
		{
			printf("\n\tvalue %d is found at index %d ",tree[i],i);
			return;
		}
	}
	printf("\n\tvalue %d not found ",x);	
}
void inorder(int x)
{
	if(size==0)
	{
		printf("\n\ttree empty");
		return;
	}
	else if(x<size)
	{
		inorder(2*x+1);
		printf("\t%d",tree[x]);
		inorder(2*x+2);
	}
}
void preorder(int x)
{
	if(size==0)
	{
		printf("\n\ttree empty");
		return;
	}
	else if(x<size)
	{
		printf("\t%d",tree[x]);
		preorder(2*x+1);
		preorder(2*x+2);
	}
}
void postorder(int x)
{
	if(size==0)
	{
		printf("\n\ttree empty");
		return;
	}
	else if(x<size)
	{
		postorder(2*x+1);
		postorder(2*x+2);
		printf("\t%d",tree[x]);
	}
}
int main()
{
	int i,x;
	printf("\n\tbinary tree operations using array");
	printf("\n\n\tbinary tree operations");
	printf("\n\t1 for insert \n\t2 for delete \n\t3 for search \n\t4 for inorder traversal \n\t5 for preorder traversal \n\t6 for postorder treversal \n\t7 for exit");
	while(1)
	{
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				insert();
				break;
			case 2:
				del();
				break;
			case 3:
				search();
				break;
			case 4:
				printf("\n\tinorder traversal\n");
				inorder(0);
				break;
			case 5:
				printf("\n\tpreorder traversal\n");
				preorder(0);
				break;
			case 6:
				printf("\n\tpostorder traversal\n");
				postorder(0);
				break;
			case 7:
				exit(0);
			default:
				printf("\n\tinvalid choice");
				break;
		}
		printf("\n\tenter any options");
	}
}
