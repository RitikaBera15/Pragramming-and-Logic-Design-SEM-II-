#include<stdio.h>
int main (){
	int n;
	printf("Enter a Number : ");
	scanf("%d", &n);
	int p=n;
	int r;
	int sum = 0;
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(p==sum){
		printf("\nArmstromng Number  ");
	}else{
		printf("\nNot Armstrong Number ");
	}
	return 0;
}
