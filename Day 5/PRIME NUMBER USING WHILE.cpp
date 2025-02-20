#include<stdio.h>
int main(){
	int n,i;
	printf("Enter a Number : ");
	scanf("%d", &n);
	int c = 0;
	i = 2;
	while(i<=n){
		if(n%i==0){
			break;
		}
		i++;
	}

	if(i<n){
		printf("Not a Prime Number");
	}else
	{
		printf("Prime Number");
	}
	return 0;
}
