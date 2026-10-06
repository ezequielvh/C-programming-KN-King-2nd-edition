#include <stdio.h>

int main(void){
	
	int hour, min;

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hour, &min);

	if (hour < 13)
		printf("Equivalent 12-hour time: %d:%d AM", hour, min);
	if (hour < 25)
		printf("Equivalent 12-hour time: %d:%d PM", hour-12, min);
	else
		printf("Hour time format no accepted");

	return 0;


}