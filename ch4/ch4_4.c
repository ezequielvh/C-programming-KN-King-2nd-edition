#include <stdio.h>

int main(void){
	int i, i1, i2, i3, i4, i5;
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &i);
	i5 = i%8;
	i4 = i/8%8;
	i3 = i/8/8%8;
	i2 = i/8/8/8%8;
	i1 = i/8/8/8/8%8;
	printf("In octal, your number is: %d%d%d%d%d", i1, i2, i3, i4, i5);
	return 0;
}
