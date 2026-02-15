#include <stdio.h>
#define s 6
int q[s];
int r=-1;
int f=-1;
void procedure(int x,int q[]) 
{
    if(f==(r+1)%s) 
        printf("\n\tqueue Overflow\n"); 
	else if(r==-1 && f==-1)
	{
        f=(f+1)%s;
        r=(r+1)%s;
        q[r]=x;
    }
    else
    {
    	r=(r+1)%s;
    	q[r]=x;
	}
}
int consumer(int q[]) 
{
	int x;
    if (r==-1 && f==-1)
	{
        printf("\n\tqueue Underflow\n");
        return -1;
    }
	else if(r==f) 
	{
		x=q[f];
		r=-1;
        f=-1;
        return x;
    }
    else
    {
    	x=q[f];
		f=(f+1)%s;
		return x;
	}
}
void display(int q[])
{
	int i;
    if (r==-1 && f==-1) 
        printf("\n\tqueue is empty\n");
	else 
	{
        printf("\n\tqueue elements: ");
        i = f;
        while (1) 
		{
            printf("%d ", q[i]);
            if (i == r) break;   
            i = (i+1)%s;        
       }
		printf("\n");
    }
}

int main() 
{
	int i,n,x;
	printf("\n\tqueue implementation program");
	printf("\n\tenter how many elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter %d element",i+1);
		scanf("%d",&x);
		procedure(x,q);	
	}
	printf("\n\tpress 1 for queue procedure");
	printf("\n\tpress 2 for queue consumer");
	printf("\n\tpress 3 for queue display");
	printf("\n\tpress 4 for queue exit");
	scanf("%d",&i);
	while(i<4)
	{
		switch(i)
		{
			case 1:
				printf("\n\tqueue procedure");
				printf("\n\tenter element");
				scanf("%d",&x);
				procedure(x,q);
				break;
			case 2:
				printf("\n\tPopped: %d\n",consumer(q));
				break;
			case 3:
				display(q);
				break;
			default :
				printf("\n\t enter correct option");
				break;
		}
		printf("\n\tpress 1 to 3 to do operation");
		scanf("%d",&i);
	}
    return 0;
}
