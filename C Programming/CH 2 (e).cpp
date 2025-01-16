#include<stdio.h>
#include<conio.h>
main(void)
{
	int s,r,n,s2=0,r1,m;
	printf("Enter number ");
	scanf("%d", &n);
	while(n>0)
	{
		r=n%10+1;
		s=s*10+r;
		n=n/10;
	}
	printf("The reverse no %d", s);
	m=s;
	while(m>0)
	{
		r1=m%10;
		s2=s2*10+r1;
		m=m/10;
	}
	printf("The number %d", s2);
	getch();
}

