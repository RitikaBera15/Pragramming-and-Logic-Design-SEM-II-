#include<stdio.h>
#include<conio.h>
int main()
{
	int s1, s2, s3, s4, s5, tm; 
	float percentage; 
	printf("Enter the 1st Subject marks ");
	scanf("%d", &s1);
	
	printf("Enter the 2nd Subject marks ");
	scanf("%d", &s2);
	
	printf("Enter the 3rd Subject marks ");
	scanf("%d", &s3);
	
	printf("Enter the 4th Subject marks ");
	scanf("%d", &s4);
	
	printf("Enter the 5th Subject marks ");
	scanf("%d", &s5);
	
	tm=s1+s2+s3+s4+s5;
	percentage=(float) tm/500*100;
	printf("Your Total Marks is %d \nYour Percentage is %f", tm, percentage);
	
	getch();
}

