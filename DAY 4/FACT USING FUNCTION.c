#include<stdio.h>
int fact(int n);
int main (){
	int n;
	printf("Enter Your Number : ");
	scanf("%d", &n);
	int a = fact(n);
	printf("Fact is %d", a);
	return 0;
}
int fact(int n){
	if(n<=1)
	return 1;
	else
	return n*fact(n-1);
}

