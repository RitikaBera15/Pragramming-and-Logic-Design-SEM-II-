#include <stdio.h>


int swap_val (int a, int b);
int swap_ref (int *x, int *y);
int main ()
{
	int c, d;
	int e, f;
	printf("Enter the value of a:");
	scanf("%d", &c);
	printf("Enter the value of b:");
	scanf("%d", &d);
	printf("Enter the value of x:");
	scanf("%d", &e);
	printf("Enter the value of y:");
	scanf("%d", &f);
	swap_val(c,d); swap_ref (&e, &f);
	
}
int swap_val (int a, int b)
{
	int temp;
	temp = b;
	b = a;
	a = temp;
	printf("\nAfter swapping the value of a: %d", a);
	printf("\nAfter swapping the value of b: %d", b);
}
int swap_ref (int *x, int *y)
{
	int z;
	z = (*y);
	(*y) = (*x);
	(*x) = z;
	printf("\nAfter swapping the value of x: %d", (*x));
	printf("\nAfter swapping the value of y: %d", (*y));
}





