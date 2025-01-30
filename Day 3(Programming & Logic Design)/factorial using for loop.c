#include<stdio.h>
int main(){
	int n,i;
	printf("Enter a Number : ");
	scanf("%d", &n);
	int fac = 1;
	for(i=1; i<=n; i++){
		fac = fac * i;
	}
	printf("%d",fac);
	return 0;
}
