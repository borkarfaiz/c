/* fibonanci - iterative approach */

#include<stdio.h>
#include<conio.h>


int fib(int n) {
	if(n<=1) {
		return n;
	}
	int f1,f2,f;
	f1 = 0;
	f2 = 1;
	int i;
	for(i=2; i<=n; i++) {
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	return f;
}

int main() {
	int n,a;
	printf("Enter the n ");
	scanf("%d",&n);
	a = fib(n);
	printf("The number is %d", a);
	getch();
}