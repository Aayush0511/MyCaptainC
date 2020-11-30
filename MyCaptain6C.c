#include<stdio.h>
int lcm(int, int);
int main() {
	int a, b, ans;
	printf("Input first number: ");
	scanf("%d", &a);
	printf("Input second number: ");
	scanf("%d", &b);
	ans = lcm(a, b);
	printf("LCM of %d and %d = %d", a, b, ans);
return 0;
}

int lcm(int a, int b)
{ 
	static int x=1;
	if (x%a==0 && x%b==0)
		return x;
	else {
		x++;
		return lcm(a, b);
	} 
}
