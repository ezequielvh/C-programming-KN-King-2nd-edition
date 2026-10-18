#include <stdio.h>

int main(void){

	int num1, num2, a, b, resid;

	printf("Enter a fraction: ");
	scanf("%d/%d", &num1, &num2);
	
	a = num1; b = num2;

	while(b != 0) {
		resid = a % b;
		a = b;
		b = resid;
	}

	num1 = num1/a;
	num2 = num2/a;

	if (num2 == 1)
		printf("In lowest terms: %d\n", num1);
	else
		printf("In lowest terms: %d/%d\n", num1, num2);

	return 0;

}