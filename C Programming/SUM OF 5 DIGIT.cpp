#include<stdio.h>
#include<conio.h>
int main()
{
	int A, i, sum=0, rem;
	printf("Enter the 5 digit number ");
	scanf("%d", &A);
	for(i=0;i<5;i++)
	{
		rem=A%10;
		sum=rem+sum;
		A=A/10;
	}
	printf("\nThe result is %d", sum);	
	/*rem1=A%10; rem2=(A/10)%10; rem3=((A/10)/10)%10; rem4=(((A/10)/10)/10)%10; rem5=((((A/10)/10)/10)/10)%10;
	sum=rem1+rem2+rem3+rem4+rem5;
	printf("The result is %d", sum);*/
	getch();
}
