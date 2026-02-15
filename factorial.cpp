#include<stdio.h>

int fact(int x)
{
	if (x<=0)
		return 1;
	return x*fact(x-1);
}
int main()
{
	int n=3;
	int x;
	x=fact(n);
	printf("%d",x);
}
