#include<stdio.h>

int checkPrime(int, int);

int main() {
	int num, p;
	printf("Enter a number: ");
	scanf("%d", &num);
	p = checkPrime(num, num/2);
	if(p == 1)
		printf("%d is a prime number", num);
	else
		printf("%d is not a prime number", num);
return 0;
}

int checkPrime(int n, int i) {
	if(i==1)
		return 1;
	else
		if(n % i == 0)
			return 0;
		else
			return checkPrime(n, i-1); 
}
