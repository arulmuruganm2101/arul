#include<stdio.h>
#include<math.h>
#include<malloc.h>
struct node
{
	int data;
	struct node* next;

};
struct node* createnode(int x)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	return newnode;
};
int main()
{
	int i,n,x,p;
	struct node* temp=NULL;
	struct node* head=NULL;
	printf("enter how many elements to be inserted");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\tenter %d value",i+1);
		scanf("%d",&x);
		struct node* newnode=createnode(x);
		if(head==NULL)
		{
			head=newnode;
			temp=head;
		}
		else
		{
			temp->next=newnode;
			temp=temp->next;
		}
	}
	temp=head;
	printf("\n\tgiven node are\n");
	while(temp!=NULL)
	{
		printf("\t%d",temp->data);
		temp=temp->next;
	}
	printf("\n\tpress 1 for insert node at beginning");
	printf("\n\tpress 2 for insert node at end");
	printf("\n\tpress 3 for insert node at particular position");
	printf("\n\tpress 4 for delete node at beginning");
    printf("\n\tpress 5 for delete node at end");
    printf("\n\tpress 6 for delete node at particular position");
	printf("\n\tpress 7 for exit");
	scanf("%d",&i);
	while(i<7)
	{
		switch(i)
		{
			case 1:
				temp=head;
				printf("\n\tinsert node at begining");
				printf("\n\tenter value ");
				scanf("%d",&x);
				if (head==NULL)
				{
					struct node* newnode=createnode(x);
					head=newnode;
					head->next=temp;
					temp=head;
				}
				else
				{
					struct node* newnode=createnode(x);
					head=newnode;
					head->next=temp;
					temp=head;
				}
				printf("\n\tnode afterinsertion\n");
				temp=head;
				if (head==NULL)
				{
					printf("\n\tno node to display");
				}
				else
				{
	        		while(temp!=NULL)
    	    			{
        	     				 printf("\t%d",temp->data);
            	   				 temp=temp->next;
      					}
      			}
      			break;
			case 2:
				printf("\n\tinsert node at end");
				printf("\n\tenter the value");
				scanf("%d",&x);
				temp=head;
				if (head==NULL)
				{
					struct node* newnode=createnode(x);
					head=newnode;
					head->next=temp;
					temp=head;	
				}
				else
				{
					struct node* newnode=createnode(x);
					while(temp->next!=NULL)
					{
						temp=temp->next;
					}
					temp->next=newnode;
					temp=newnode;
				}
				printf("\n\tnode after insertion \n");
				temp=head;
				if (head==NULL)
				{
					printf("\n\tno node to display");
				}
				else
				{
	        		while(temp!=NULL)
    	    			{
        	     				 printf("\t%d",temp->data);
            	   				 temp=temp->next;
      					}
      			}
				break;
			case 3:
				printf("\n\tinsert node at position");
				printf("\n\tenter position");
				scanf("%d",&p);
				printf("\n\tenter value");
				scanf("%d",&x);
				if(head==NULL)
				{
					struct node* newnode=createnode(x);
					head=newnode;
					head->next=temp;
					temp=head;
				}
				else
				{
					struct node*newnode=createnode(x);
					temp=head;
					for(i=1;i<p-1;i++)
					{
						temp=temp->next;
					}
					newnode->next=temp->next;
					temp->next=newnode;
				}
				printf("\n\tnode after insertion\n");
				if (head==NULL)
				{
					printf("\n\tno node to display");
				}
				else
				{
					temp=head;
					while(temp!=NULL)
					{
						printf("\t%d",temp->data);
						temp=temp->next;
					}
				}
				break;
			case 4:
				printf("\n\tdelete node at beginning");
				temp=head;
				if (head==NULL)
				{
					printf("\n\tno node to delete");
				}
				else
				{
					if(head->next==NULL)
					{
						temp=head;
						head=NULL;
						free(temp);
					}
					else
					{
						temp=head;
						head=head->next;
						free(temp);
					}
				}
				printf("\n\tnode after deletion \n");
				temp=head;
				if (head==NULL)
				{
					printf("\n\tno node to display");
				}
				else
				{
	        		while(temp!=NULL)
    	    			{
        	     				 printf("\t%d",temp->data);
            	   				 temp=temp->next;
      					}
      			}
				break;
			case 5:
				printf("\n\tdelete an node at end");
  				temp=head;
				struct node* dust=NULL;
				if (head==NULL)
				{
					printf("\n\tno node to delete");
				}
				else
				{
					if(head->next==NULL)
					{
						temp=head;
						head=NULL;
						free(temp);
					}
					else
					{
						while(temp->next->next!=NULL)
						{
							temp=temp->next;
						}
						dust=temp->next;
						temp->next=NULL;
						free(dust);
					}
				}
		   		printf("\n\tnode after deletion\n");
        		temp=head;
        		if(head==NULL)
        		{
        			printf("\n\tno node to display");
				}
				else
				{
	       			while(temp!=NULL)
    	  			{
        	       		printf("\t%d",temp->data);
						temp=temp->next;
   					}
   				}
				break;
			case 6:
			    temp=head;
	            if (head==NULL)
	            {
	            	printf("\n\tno node to delete");
				}
				else
				{
					printf("\n\tdelete node at particular position");
					printf("\n\tenter position");
	            	scanf("%d",&p);
					if(head->next==NULL)
					{
						temp=head;
						head=NULL;
						free(temp);
					}
					else
					{
						for(i=1;i<p-1;i++)
						{
							temp=temp->next;
						}
						dust=temp->next;
						temp->next=dust->next;
						free(dust);
					}
				}
   			    printf("\n\tnode after deletion\n");
 			   	temp=head;
 			   	if(head==NULL)
 			   	{
 			   		printf("\n\tno node to display");
				}
				else
				{
				    while(temp!=NULL)
    	   			{
        	       		printf("\t%d",temp->data);
            			temp=temp->next;
 					}
 				}
				break;
			default:
				printf("enter the correct options");
				break;
		}
		printf("\n\tpress 1 to 6 to do the operation");
		scanf("%d",&i);
	}
}
