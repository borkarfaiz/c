/* factorial - using recursion */

#include<stdio.h>
#include<conio.h>

int factorial(int n) {
	if(n==0) {
		return 1;
	}
	return n * factorial(n-1);
}

int main() {
	int n;
	printf("Enter the number ");
	scanf("%d",&n);
	printf("the factrial of %d is %d", n, factorial(n));
	getch();
}