#include<stdio.h>

int main() {
	
	int marks;
	
	printf("Enter the marks obtained: ");
	scanf("%d", &marks);		//Taking input from the user
	
	if(marks >= 85 && marks <= 100)
		printf("Grade A");
	else if(marks >= 70 && marks <= 84)
		printf("Grade B");
	else if(marks >= 55 && marks <= 69)
		printf("Grade C");
	else if(marks >= 40 && marks <= 54)
		printf("Grade D");
	else if(marks <= 40)
		printf("Grade F");
		
return 0;
}
