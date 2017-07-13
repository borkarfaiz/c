/* fibonanci - recursive approach */

#include<stdio.h>
#include<conio.h>

int fib(int n) {
	if(n<=1) {
		return n;
	}
	return fib(n-1) + fib(n-2);
}

int main() {
	int n,a;
	printf("Enter the n ");
	scanf("%d",&n);
	a = fib(n);
	printf("The number is %d", a);
	getch();
}