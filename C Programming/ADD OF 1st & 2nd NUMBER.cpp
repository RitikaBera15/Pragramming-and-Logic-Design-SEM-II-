#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int A, i, first_digit, rem, sum;
	printf("Enter the 5 digit number ");
	scanf("%d", &A);

		rem=A%10;
		first_digit=A/10000;
		sum=rem+first_digit;
	printf("\nsum of 1st and 2nd number %d", sum);	
	/*rem1=A%10; rem2=(A/10)%10; rem3=((A/10)/10)%10; rem4=(((A/10)/10)/10)%10; rem5=((((A/10)/10)/10)/10)%10;
	sum=rem1+rem2+rem3+rem4+rem5;
	printf("The result is %d", sum);*/
	getch();
}
