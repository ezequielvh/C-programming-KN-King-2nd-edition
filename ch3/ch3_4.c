#include <stdio.h>

int main(void){
	int area, prefix, numb;
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &area, &prefix, &numb);
	printf("You entered %.3d.%.3d.%.4d", area, prefix, numb);
	return 0;
}