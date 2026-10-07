#include <stdio.h>

int main(void){

	float commission1, commission2, share, price, value;

	printf("Enter number of shares involved: ");
	scanf("%f", &share);
	printf("Enter the share's prices: ");
	scanf("%f", &price);
	
	value = share*price;

	if (value < 2500.00f)
		commission1 = 30.00f + 0.017f*value;
	else if (value < 6250.00f)
		commission1 = 56.00f + 0.0066f*value;
	else if (value < 20000.00f)
		commission1 = 76.00f + 0.0034f*value;
	else if (value < 50000.00f)
		commission1 = 100.00f + 0.0022f*value;
	else if (value < 500000.00f)
		commission1 = 155.00f + 0.0011f*value;
	else
		commission1 = 255.00f + 0.0009f*value;

	if (commission1 < 39.00f)
		commission1 = 39.00f;

	if (share < 2000)
		commission2 = 33.00f + 0.033f*share;
	else
		commission2 = 33.00f + 0.020f*share;

	printf("Commission charged is: $%.2f\n", commission1);
	printf("The rival's commission charged is: $%.2f\n", commission2);

	return 0;
}