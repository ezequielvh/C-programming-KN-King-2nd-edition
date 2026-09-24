#include <stdio.h>

int main(void){
	float x;
	printf("Insert a number x: ");
	scanf("%f",&x);
	printf("The value of function f(x) is: %.1f", 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x +7*x -6);
	return 0;
}
	