#include<stdio.h>

int digitsSum(int);

int main() {
	
	int num, sum;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	sum = digitsSum(num);
	printf("Sum of digits of %d is %d", num, sum);
	
return 0;
}

int digitsSum(int n) {
	
	if(n != 0) {
		return (n%10) + digitsSum(n/10);
	} else {
		return 0;
	}
	
}
