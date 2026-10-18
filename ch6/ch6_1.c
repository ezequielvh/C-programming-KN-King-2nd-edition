#include <stdio.h>

int main(void) {
	
	float i, num, max;

	num = 0;
	max = 0;

	do {
	
	printf("Enter a number: ");
	scanf("%f", &i);
	
	if (i > num){
		num = i;
	}
	else if (num > max) {
		max = num;		
	}
	} while (i > 0);

	printf("The largest number entered was %.2f", max);

	return 0;
}