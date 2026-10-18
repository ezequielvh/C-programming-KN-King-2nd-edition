/*We assume you don't know the Euclid's algorithm, so we try to solve it more intuitively*/

#include <stdio.h>

int main(void){

	int num1, num2, resid;

	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);

	if (num1 == 0 || num2 == 0){
		if (num1 > num2){
		printf("Greatest common divisor: %d", num1);
		}
		else if (num2 > num1){
		printf("Greatest common divisor: %d", num2);
		}
		else{
		printf("Greatest common divisor: 0");
		}
	}
	else if (num1 >= num2){
		do {
			resid = num1%num2;
			if (resid == 0)
				break;
			num1 = num2;
			num2 = resid;
		} while (resid > 0);
		
		printf("Greatest common divisor: %d", num2);
	}

	else if (num2 >= num1){
		do {
			resid = num2%num1;
			if (resid == 0)
				break;
			num2 = num1;
			num1 = resid;
		} while (resid > 0);

		printf("Greatest common divisor: %d", num1);
	}

	return 0;

}