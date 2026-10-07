#include <stdio.h>

int main(void){

	float speed;

	printf("Enter the wind speed (in knots): ");
	scanf("%f", &speed);

	if (speed < 1.00f)
		printf("The speed of %.2f knots describes a scenary of calm", speed);
	else if (speed < 3.00f)
		printf("The speed of %.2f knots describes a scenary of light air", speed);
	else if (speed < 27.00f)
		printf("The speed of %.2f knots describes a scenary of breeze", speed);
	else if (speed < 47.00f)
		printf("The speed of %.2f knots describes a scenary of gale", speed);
	else if (speed < 63.00f)
		printf("The speed of %.2f knots describes a scenary of storm", speed);
	else
		printf("The speed of %.2f knots describes a scenary of hurricane", speed);

	return 0;
}