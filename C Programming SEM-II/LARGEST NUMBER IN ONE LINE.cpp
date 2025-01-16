#include<stdio.h>
int main(){
	int a=50,b=60,c=70;
	if((a>b)?(a>c)? printf("A=%d is large", a):printf("C=%d is large", c) : (b>c)? printf("B=%d is large", b):printf("C=%d is large", c))
	return 0;
}
