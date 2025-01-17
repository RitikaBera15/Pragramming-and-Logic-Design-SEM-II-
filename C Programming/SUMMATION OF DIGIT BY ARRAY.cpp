#include<stdio.h>
#include<conio.h>
main (void)
{
	int i, n, s=0;
	int arr[3];
	printf("Enter 3 elements in the array: \n");
	for(i=0; i<3; i++)
	{
		printf("Element - %d:", i);
		scanf("%d", &arr[i]);
	}
			
	for(i=0;i<3;i++)
	{
		n=arr[i];
		s=n+s;
	}
	printf("Summation of 3 elements in the array %d", s);
	getch();
}
