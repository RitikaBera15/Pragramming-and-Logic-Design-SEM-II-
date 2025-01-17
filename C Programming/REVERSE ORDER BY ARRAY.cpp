#include<stdio.h>
#include<conio.h>
main (void)
{
	int i, n, c, m;
	int arr[10]= {1,6,8,80,4,20,16,51,5,7};
	printf("The Odd position Number");
	for(i=1;i<10;i=i+2)
	{
		n=arr[i];
		printf("%d, ", n);
	}
	printf("\nThe Even position Number");
	for(c=1;c<10;c=c+2)
	{
		m=arr[c];
		printf("%d, ", m);
	}
	printf("Reverse order of elements" );
	getch();
}
