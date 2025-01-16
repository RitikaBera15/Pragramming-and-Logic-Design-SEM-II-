#include<stdio.h>
#include<conio.h>
int main()
{
	float Basic_Salary, Dearness_allowance, House_rent_Allowance, Gross_Salary;
	printf("Enter the Basic Salary ");
	scanf("%f", &Basic_Salary);
	Dearness_allowance=(40*Basic_Salary)/100;
	House_rent_Allowance=(20*Basic_Salary)/100;
	Gross_Salary=Basic_Salary+Dearness_allowance+House_rent_Allowance;
	printf("Ramesh's Gross Salary %f", Gross_Salary);
	printf("\nRamesh's Dearness Allowance %f", Dearness_allowance);
	printf("\nRamesh's House_rent_Allowance %f", House_rent_Allowance);
	getch();
}
