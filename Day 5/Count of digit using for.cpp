#include<stdio.h>
int main (){
	int n, i;
	int count = 0;
	printf("Enter a Number : ");
	scanf("%d", &n);
	for(i = n; n>0; i--){
		n=n/10;
		count++;
	}
	printf("%d",count);
	return 0 ;
}

