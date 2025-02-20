#include<stdio.h>
int main (){
	int n, i;
	int rev=0;
	int r;
	printf("Enter a Number : ");
	scanf("%d", &n);
	for(i=n; n>0; i--){
		r = n%10;
		rev = rev * 10 + r ;
		n/=10;
	}
	printf("%d",rev);
	return 0;
}

