#include<stdio.h>
int fac(int n){
	if(n==0 || n==1){
		return 1;
	} else{
		return n * fac (n-1);
	}
}
int main(){
	int n;
	printf("Enter a Number : ");
	scanf("%d", &n);
	printf("Fact is : %d",fac(n));
	return 0;
}

