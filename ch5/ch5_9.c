#include <stdio.h>

int main(void){

	int month1, day1, year1;
	int month2, day2, year2;
	int time1, time2;
	
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month1, &day1, &year1);
	time1 = year1*360 + (month1 - 1)*30 + day1;

	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month2, &day2, &year2);
	time2 = year2*360 + (month2 - 1)*30 + day2;

	if (time1 > time2)
		printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);

	else if (time2 > time1)
		printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);

	else
		printf("Both are the same\n");
		
	
	return 0;		
}