#include <stdio.h>

int main(void){

	int grade, num;

	printf("Enter numerical grade: ");
	scanf("%d", &grade);
	num = grade/10;

	if (num > 10 || num < 0)
		printf("Error message, only grades between 0-100");
	else {
		switch(num){
			case 10:
			case 9: printf("Letter grade: A");
				break;
			case 8: printf("Letter grade: B");
				break;
			case 7: printf("Letter grade: C");
				break;
			case 6: printf("Letter grade: D");
				break;
			default: printf("Letter grade: F");
				break;
			}
	}

}