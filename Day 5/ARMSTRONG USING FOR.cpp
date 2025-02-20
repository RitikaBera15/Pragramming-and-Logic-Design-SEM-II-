#include<stdio.h>
int main (){
	int n,i;
	printf("Enter a Number : ");
	scanf("%d", &n);
	int p=n;
	int r;
	int sum = 0;
	for(i=n; n>0; i--){
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

