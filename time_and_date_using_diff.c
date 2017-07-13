/* it uses difftime() to measusre the time of the program */

#include<stdio.h>
#include<conio.h>
#include<time.h>



void main() {
	time_t start,end;
	volatile long unsigned counter;

	start = time(NULL);
	for(counter = 0; counter < 1500000000; counter++);
	end = time(NULL);
	
	printf("the loop used %f seconds.\n ", difftime(end,start)); getch();
}