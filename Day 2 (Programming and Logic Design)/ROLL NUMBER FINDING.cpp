#include<stdio.h>
int main()
{
	int roll;
	printf("Enter your roll number to check you are specific roll number or not:");
	scanf("%d", &roll);
	if(roll == 21)
	{
		printf("\nRoll number found! you are that specific roll number");
	}
	return 0;
}
