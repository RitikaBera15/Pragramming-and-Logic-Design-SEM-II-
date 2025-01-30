#include<stdio.h>
int main(){
	int n,i;
	printf("Enter a Number : ");
	scanf("%d", &n);
	int c= 0;
	for(i=2; i<=n; i++){
		if(n%i==0){
			break;
		}
	}
	if(i<n){
		printf("Not a Prime Number");
	}else{
		printf("Prime Number");
	}
}
