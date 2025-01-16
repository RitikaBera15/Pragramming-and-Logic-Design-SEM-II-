#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float length, breadth, radius, area_rectangle, perimeter_rectangle, area_circle, circumference_circle;
	printf("Enter the Length of Rectangle ");
	scanf("%f", &length);
	printf("Enter the Breadth of Rectangle ");
	scanf("%f", &breadth);
	printf("Enter the Radius of Circle ");
	scanf("%f", &radius);
	area_rectangle=length*breadth;	
	perimeter_rectangle=2*(length+breadth);
	area_circle=pow(radius,2)*3.14;
	circumference_circle=2*3.14*radius;
	printf("The area of Rectangle %0.2f \nThe perimeter of Rectangle %0.2f \nThe area of circle %0.2f \nThe circumference of circle %0.2f",
	area_rectangle, perimeter_rectangle, area_circle, circumference_circle);
}
