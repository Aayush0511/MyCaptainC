#include<stdio.h>

int digitsSum(int);

int main() {
	
	int num, sum;
	printf("Input number: ");
	scanf("%d", &num);
	
	sum = digitsSum(num);
	printf("Sum of digits: %d", sum);
	
return 0;
}

int digitsSum(int n) {
	
	if(n != 0) {
		return (n%10) + digitsSum(n/10);
	} else {
		return 0;
	}
	
}
