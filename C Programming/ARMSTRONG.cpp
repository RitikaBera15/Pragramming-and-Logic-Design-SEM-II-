#include<stdio.h>
#include<conio.h>
main(void)
{
	int i,r,s=0,n,a;
	printf("Enter the Number ");
	scanf("%d", &n);
	a=n;
	while(n>0)
	{
	r=n%10;
	s=s+(r*r*r);
	n=n/10;
	}
	printf("%d", s);
	if(a==s)
	{
		printf("\nThe number is Armstrong");
	}
	else
	{
		printf("\nThe Number is not armstrong");
	}
	getch();
}

