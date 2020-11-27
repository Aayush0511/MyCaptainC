#include<stdio.h>

int main() {
	
	int l, i, j;
	printf("Enter the number of lines: ");
	scanf("%d", &l);
	
	for(i = 1; i <= l; i++) {
		for(j = 1; j <= i; j++) {
			printf("01");
		}
		printf("\n");
	}
	
return 0;
}
