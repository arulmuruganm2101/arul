#include<stdio.h>
#include<math.h>
#define s 5
int q[s];
int f=-1;
int r=-1;
void insert(int x)
{
	if((f==0 && r==s-1)||(f==r+1))
	{
		printf("\n\t queue full");
		return;
	}
	if(f==-1)
	{
		f=0;
		r=0;
	}
	else
	{
		if (r==s-1)
		{
			r=0;
		}
		else
		{
			r=r+1;
		}
	}
	q[r]=x;
	printf("\n\tinserted %d ",q[r]);
}
void del()
{
	if (f==-1)
	{
		printf("\n\tqueue empty");
		return;
	}
	int x;
	x=q[f];
	if (f==r)
	{
		f=-1;
		r=-1;
	}
	else
	{
		if (f==s-1)
		{
			f=0;
		}
		else
		{
			f=f+1;
		}
	}
	printf("\n\t deleted %d",x);
}
void disp()
{
	if(f == -1)
	{
		printf("\n\tQueue is empty");
		return;
	}
	int i = f;
	printf("\n\tfront -> ");
	while(1)
	{
		printf("%d\t", q[i]);
		if(i == r)
			break;
		i = (i + 1) % s;
	}
	printf("<- rear");
}
int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(1000);
	disp();
	del();
	disp();
	insert(35);
	disp();
}
