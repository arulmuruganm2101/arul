#include<stdio.h>
void rec(x)
{
	if (x<=0)
		return;
	printf("\n%d",x);
	rec(--x);
}
void rec1(x)
{
	if (x<=0)
		return;
	rec1(--x);
	printf("\n%d",x);
}
void rec2(x)
{
	if (x<0)
		return;
	rec2(x--);
	printf("\n%d",x);
}
int main()
{
	int n=5;
	rec(n);
	printf("\n");
	rec1(n);
	printf("\n");
	rec2(n);
}
