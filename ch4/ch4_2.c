#include <stdio.h>

int main(void){

	int i;
	printf("Enter a three-digit number: ");
	scanf("%d", &i);
	i = i%10*100 + i/10%10*10 + i/100; //hello
	printf("The reversal is: %d", i);
	return 0;
}
