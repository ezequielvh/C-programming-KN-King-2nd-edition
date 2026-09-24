#include <stdio.h>

int main(void){
	float x, t;
	printf("Enter an amount: ");
	scanf("%f", &x);
	t = x*1.05f;
	printf("With tax added: %.2f\n", t);
	return 0;
}
