#include <stdio.h>

int main(void){

	int value;
	
	printf("Enter a number: ");
	scanf("%d", &value);

	if (value < 10)
		printf("The number %d has 1 digit", value);
	else if (value < 99)
		printf("The number %d has 2 digits", value);
	else if (value < 1000)
		printf("The number %d has 3 digits", value);
	else
		printf("The number %d has more than 3 digits", value);

	return 0;
}