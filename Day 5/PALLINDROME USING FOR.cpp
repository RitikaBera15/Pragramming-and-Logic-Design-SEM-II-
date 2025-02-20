#include <stdio.h>
int main() {
    int n, rev = 0, r, i;
    printf("Enter Your Number: ");
    scanf("%d", &n);
    int sum = n;
    for(i=n; n>0; i--){
        r = n % 10;    
        rev = rev* 10 + r;  
        n = n / 10;                 
    }
    if(sum==rev){
    	printf("Pallindrom Number ");
	}else{
		printf("Not a Pallindrom Number ");
	}
    return 0;
}

