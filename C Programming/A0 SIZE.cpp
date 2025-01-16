#include<stdio.h>
#include<conio.h>
int main()
{
	int i, LENGTH=1189, WIDTH=841, A;
	for(i=0;i<9;i++)
	{
		printf("\n A%d: %d x %d", i, LENGTH, WIDTH);
		A=LENGTH;
		LENGTH=WIDTH;
		WIDTH=A/2;
	}
	return 0;
}
