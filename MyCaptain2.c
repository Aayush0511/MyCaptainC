#include<stdio.h>
int main() {
	
	int a = 0, b = 0;		//Initialising two integer variables a and b to 0
	
	printf("Enter the value of a: ");
	scanf("%d", &a);		//Taking input for a
	printf("Enter the value of b: ");
	scanf("%d", &b);		//Taking input for b
	
	printf("Before swapping: a = %d, b = %d\n", a, b);		//Printing values of a and b before the swap
	
	a = a + b;		
	b = a - b;
	a = a - b;
	
	printf("After swapping: a = %d, b = %d\n", a, b);		//Printing values of a and b after the swap
	
	return 0;
}
