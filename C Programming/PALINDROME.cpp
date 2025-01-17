#include<stdio.h>
#include<conio.h>
main(void)
{
	int i,r,s=0,n,p;
	printf("Enter the Number ");
	scanf("%d", &n);
	p=n;
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	printf("The reverse number %d", s);
	if(p==s)
	{
		printf("\nThe Number is Pallindrome");
	}
	else
	{
		printf("\nThe Number is not Pallindrome");
	}
	getch();
}

