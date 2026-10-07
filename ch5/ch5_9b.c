#include <stdio.h>

#define TODAY (26*360 + (10-1)*30 + 6) // October 6th, 2026

int main(void){

	int month1, day1, year1;
	int month2, day2, year2;
	int time1, time2;
	int diff1, diff2;
	
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month1, &day1, &year1);
	time1 = year1*360 + (month1 - 1)*30 + day1;

	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &month2, &day2, &year2);
	time2 = year2*360 + (month2 - 1)*30 + day2;

	diff1 = (time1 > TODAY)?(time1-TODAY):(TODAY-time1);
	diff2 = (time2 > TODAY)?(time2-TODAY):(TODAY-time2);

	if (diff1 > diff2)
		printf("%d/%d/%d is closer to today than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);

	else if (diff2 > diff1)
		printf("%d/%d/%d is closer to today than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);

	else 
		printf("Both of them dates are equally close to today (October 6th, 2026)\n");
		
	
	return 0;		
}