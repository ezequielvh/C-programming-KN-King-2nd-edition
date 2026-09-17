#include <stdio.h>
#define PI 3.14f
#define CTE 4.0f/3.0f

int main(void){
    float r = 10.0;
    printf("The cilinder's volume is %f", CTE*PI*r*r*r);
    return 0;
}