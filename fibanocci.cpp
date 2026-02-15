#include<stdio.h>

int fib(int x,int y,int z)
{
	if (z<3)
		return 1;
	int c=x+y;
	printf("\n%d",c);
	fib(y,c,--z);
	
}

int main()
{
	int x,y,z;
	x=0;
	y=1;
	z=20;
	printf("\n%d\n%d",x,y);
	fib(x,y,z);
}
