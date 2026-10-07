/* I show the original solution what I did, minutes later I realized I should 
use a descendent analysis: from 09:43 p.m. up to 8:00 a.m. This last method 
permits eliminate the logical operator && from the analysis.  */

#include <stdio.h>

int main(void) {

	int hour, min, time;
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&hour, &min);
	
	time = hour*60 + min;
	
	if ((9*60 + 43 - time >= time - 8*60) && (time < 9*60 + 43))
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");

	else if (( 11*60 + 19 - time >= time - 9*60 + 43) && (time <= 11*60 + 19))
		printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");

	else if (( 12*60 + 47 - time >= time - 11*60 + 19) && (time <= 12*60 + 47))
		printf("Closest departure time is 11:19 a.m., arriving at 1:32 p.m.");
	
	else if (( 14*60 - time >= time - 12*60 + 47) && (time <= 14*60))
		printf("Closest departure time is 12:47 p.m., arriving at 03:00 p.m.");

	else if (( 15*60 + 45 - time >= time - 14*60) && (time <= 15*60 + 45))
		printf("Closest departure time is 2:00 p.m., arriving at 04:08 p.m.");
	
	else if (( 19*60 - time >= time - 15*60 + 45) && (time <= 19*60))
		printf("Closest departure time is 3:45 p.m., arriving at 05:55 p.m.");

	else if (( 21*60 + 45 - time >= time - 19*60) && (time <= 21*60 + 45))
		printf("Closest departure time is 7:00 p.m., arriving at 09:20 p.m.");

	else if (time >= 21*60 + 45)
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");

	else
		printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");

	return 0;

}