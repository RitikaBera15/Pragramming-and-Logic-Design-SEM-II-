#include<stdio.h>
#include<conio.h>
int main()
{
	float Distance_Killometer, Distance_Centimeter, Distance_inches, Distance_Meter;
	printf("Write The Distance in Kilometer ");
	scanf("%f", &Distance_Killometer);
	Distance_Centimeter=100000*Distance_Killometer; 
	Distance_inches=39370.1*Distance_Killometer;
	Distance_Meter=1000*Distance_Killometer;
	printf("\nThe Distace in Centimeter %f", Distance_Centimeter);
	printf("\nThe Distace in Inches %f", Distance_inches);
	printf("\nThe Distace in Meter %f", Distance_Meter);
	return 0;
}
