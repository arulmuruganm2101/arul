#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* l;
	struct node* r;
};
struct node* createnode(int x)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->l=NULL;
	newnode->r=NULL;
	return newnode;
};
struct node* insert(struct node* root,int x)
{
	if(root==NULL)
		return createnode(x);
	if (x<root->data)
		root->l=insert(root->l,x);
	else if (x>root->data)
		root->r=insert(root->r,x);
	return root;
};
struct node* search(struct node* root,int x)
{
	if (root ==NULL)
		return NULL;
	if(root->data==x)
	{
		printf("\n\tvalue %d is found in the tree",root->data);
		return root;
	}
	if(x<root->data)
		return search(root->l,x);
	else 
		return search(root->r,x);
}
struct node* min(struct node* root)
{
	while(root->l!=NULL)
		root=root->l;
	return root;
}
struct node* del(struct node* root, int x)
{
	struct node* temp=NULL;
	if (root==NULL)
		return root;
	if (x<root->data)
		root->l=del(root->l,x);
	else if(x>root->data)
		root->r=del(root->r,x);
	else
	{
		if(root->l==NULL && root->r==NULL)
		{
			free(root);
			return NULL;
		}
		else if (root->l==NULL)
		{
			temp=root->r;
			free(root);
			return temp	;
		}
		else if (root->r==NULL)
		{
			temp=root->l;
			free(root);
			return temp	;
		}
		else
		{
			struct node* temp =min(root->r);
            root->data = temp->data;
            root->r=del(root->r, temp->data);
        }
	}
	return root;
}
void inorder(struct node* root)
{
	if (root!=NULL)
	{
		inorder(root->l);
		printf("\t%d",root->data);
		inorder(root->r);
	}
}
void preorder(struct node* root)
{
	if (root!=NULL)
	{
		printf("\t%d",root->data);
		preorder(root->l);
		preorder(root->r);
	}
}
void postorder(struct node* root)
{
	if (root!=NULL)
	{
		postorder(root->l);
		postorder(root->r);
		printf("\t%d",root->data);
	}
}
int main()
{
	struct node* root=NULL;
	int i,n,x;
	printf("\n\tbinary search tree operations");
	printf("\n\t1 for insert \n\t2 for delete \n\t3 for search \n\t4 for inorder traversal \n\t5 for preorder traversal \n\t6 for postorder treversal \n\t7 for exit");
	while(1)
	{
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				printf("\n\tenter the value");
				scanf("%d",&x);
				root=insert(root,x);
				break;
			case 2:
				if (root==NULL)
					printf("\n\ttree empty");
				else
				{
					printf("\n\tenter the value");
					scanf("%d",&x);
					root=del(root,x);
				}
				break;
			case 3:
				if (root==NULL)
					printf("\n\ttree empty");
				else
				{
					printf("\n\tenter the value");
					scanf("%d",&x);
					if(search(root,x)==NULL)
						printf("\n\tvalue not found");
				}
				break;
			case 4:
				if (root==NULL)
					printf("\n\ttree empty");
				else
				{
					printf("\n\tinorder traversal");
					inorder(root);
				}
				break;
			case 5:
				if (root==NULL)
					printf("\n\ttree empty");
				else
				{
					printf("\n\tpreorder traversal");
					preorder(root);
				}
				break;
			case 6:
				if (root==NULL)
					printf("\n\ttree empty");
				else
				{
					printf("\n\tpostorder traversal");			
					postorder(root);
				}
				break;
			case 7:
				exit(0);
			default:
				printf("\n\tinvalid choice enter correct choice");
				break;				
		}
		printf("\n\tenter any option");	
	}
}
