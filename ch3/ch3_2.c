#include <stdio.h>

int main(void){
	int item, m, d, y;
	float price;
	
	printf("Enter item number: ");
	scanf("%d", &item);

	printf("Enter unit price: ");
	scanf("%f", &price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);

	printf("Itemt\tUnit\tPurchase\n\tPrice\tDate\n%d\t%.2f\t%.2d/%.2d/%d",item, price, m,d,y);

	return 0;

}
