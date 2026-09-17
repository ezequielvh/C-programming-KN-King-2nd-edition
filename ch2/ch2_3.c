#include <stdio.h>
#define PI 3.14f
#define CTE 4.0f/3.0f

int main(void){
    float r;
    printf("Insert the size of radius: ");
    scanf("%f",&r);
    printf("The cilinder's volume is %f", CTE*PI*r*r*r);
    return 0;
}