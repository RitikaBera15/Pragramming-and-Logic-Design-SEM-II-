#include<stdio.h>
int main(){
	int n;
	printf("Enter a Number : ");
	scanf("%d", &n);
	int a=0, b=1;
	int i;
	int s;
	for(i=1; i<=n; i++){
		printf("%d ",a);
		s=a+b;
		a=b;
		b=s;
		printf("%d ",s);
	}
	return 0;
}
