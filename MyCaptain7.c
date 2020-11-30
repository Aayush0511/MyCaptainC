#include<stdio.h>
#include<malloc.h>

int main() {
	
	int *arr, i, j, r = 3, c = 3, d_sum = 0;
	arr = (int *) malloc (r * c * sizeof(int));
	
	for(i = 0; i < r; i++)
		for(j = 0; j < c; j++) {
			printf("Element - [%d],[%d]: ", i, j);
			scanf("%d", (arr + i*c + j));
		}
		
	printf("The matrix is:\n");
		
	for(i = 0; i < r; i++) {
		for(j = 0; j < c; j++) {
			printf("%d ", *(arr + i*c + j));
		}
		printf("\n");
	}
	
	for(i = 0; i < r; i++) {
		for(j = 0; j < c; j++) {
			if(i == j) {
				d_sum += *(arr + i*c + j);
			}
		}
	}
	
	printf("Sum of diagonal elements = %d", d_sum);
	
return 0;
}
