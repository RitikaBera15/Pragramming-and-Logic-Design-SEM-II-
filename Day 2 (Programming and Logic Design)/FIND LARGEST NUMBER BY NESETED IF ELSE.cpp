#include<stdio.h>
int main()
{
	int a, b, c;
	 printf("Enter your numbers:");
	 scanf("%d %d %d", &a, &b, &c);
	 if(a>b)
	 {
	 	if(a>c)
	 	{
	 		printf("a=%d is largest", a);
		}
		else
		{
			printf("c=%d is largest", c);
		}
	 }
	 else
	 {
	 	if(b>c)
	 	{
	 		printf("b=%d is largest", b);
		 }
		 else
		 {
		 	printf("c=%d is largest", c); 
		 }
	 }
	 return 0;
}
