#include<stdio.h>
#include<conio.h>
int main()
{
	float fh,c;
	printf("Enter Temparature in Celsius ");
	scanf("%f", &c);
	fh=((c*9)/5)+32;
	printf("The Tamparature in Fahrenheit %0.2f",fh);
	return 0;	
}
