#include<stdio.h>
#include<conio.h>
int main()
{
	float fh,c;
	printf("Enter Temparature in Fahrenheit is ");
	scanf("%f", &fh);
	c=((fh-32)*5)/9;
	printf("The Tamparature in celsius %0.2f",c);
	return 0;	
}
