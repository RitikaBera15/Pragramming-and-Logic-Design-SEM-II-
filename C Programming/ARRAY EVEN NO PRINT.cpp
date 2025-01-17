#include<stdio.h>
#include<conio.h>
main (void)
{
	int i, n, c, arr[5];
	
	printf("Enter the 5 elements : ");
	for(i=1;i<=5;i++)
	{
		printf("\nEnter the Number %d: ", i);
		scanf("%d", &arr[i]);
    }
	printf("\nThe Even Numbers:");
	for(i=1;i<=5;i++)
	{
		if (arr[i]%2==0)
		{
			printf("%d ", arr[i]);
		}
	}
	getch();
}
