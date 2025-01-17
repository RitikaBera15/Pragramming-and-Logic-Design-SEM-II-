#include<stdio.h>
#include<conio.h>
main (void)
{
	int n, i, count=0;
	printf("Enter the number ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("The number is Prime");
	}
	else
	{
		printf("The Number is not prime");
	}
	getch();
}
