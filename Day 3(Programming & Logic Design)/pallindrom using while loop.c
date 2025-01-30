#include <stdio.h>
int main() {
    int n, rev = 0, r;
    printf("Enter Your Number: ");
    scanf("%d", &n);
    int sum = n;
    while (n > 0) {
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





