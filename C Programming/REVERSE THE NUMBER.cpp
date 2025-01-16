#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int A, i, reverse, rem, m=4, sum;
	printf("Enter the 5 digit number ");
	scanf("%d", &A);
	for(i=0;i<5;i++, m--)
	{
		rem=A%10;
		A=A/10;
		reverse=pow(10,m)*rem;
		sum=reverse+sum;
	/*printf("\nThe result is %d", reverse);*/	
	}
	printf("\nThe reverse number is %d", sum);	
	/*rem1=A%10; rem2=(A/10)%10; rem3=((A/10)/10)%10; rem4=(((A/10)/10)/10)%10; rem5=((((A/10)/10)/10)/10)%10;
	sum=rem1+rem2+rem3+rem4+rem5;
	printf("The result is %d", sum);*/
	getch();
}
