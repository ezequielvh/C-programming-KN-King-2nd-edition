#include <stdio.h>

int main(void){

	float income;

	printf("How much is your taxable income?: ");
	scanf("%f", &income);
	
	if (income < 750.00f)
		printf("The amount of tax due is: 1%% of income");
	else if (income < 2250.00f)
		printf("The amount of tax due is: $7.50f plus 2%% of amount over $750.00f");
	else if (income < 3750.00f)
		printf("The amount of tax due is: $37.50f plus 3f%% of amount over $2250.00f");
	else if (income < 5250.00f)
		printf("The amount of tax due is: $82.50f plus 4%% of amount over $3750.00f");
	else if (income < 7000.00f)
		printf("The amount of tax due is: $142.50f plus 5%% of amount over $5250.00f");
	else
		printf("The amount of tax due is: $230.00f plus 6%% of amount over $7000.00f");

	return 0;
}