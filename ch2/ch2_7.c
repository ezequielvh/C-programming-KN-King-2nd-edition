#include <stdio.h>

int main(void){
	int amount, aux, x, w, y, z;
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);
	x = amount/20;
	aux = amount - x*20;
	w = aux/10;
	aux = aux - w*10;
	y = aux/5;
	aux = aux - y*5;
	z = aux/1;
	printf("$20 bills: %d\n",x);
	printf("$10 bills: %d\n",w);
	printf(" $5 bills: %d\n",y);
	printf(" $1 bills: %d\n",z);
	return 0;
}
	
	