#include <stdio.h>
float average(float a, float b, float c);
int main()
{
    float x, y, z;
    printf("Type the First number\n");
    scanf("%f", &x);
    printf("Type the second number\n");
    scanf("%f", &y);
    printf("Type the third number\n");
    scanf("%f", &z);
    printf("The average is %f\n", average(x, y, z));
    return 0;
}
float average(float a, float b, float c){
    float result;
    result= (float)(a + b + c) / 3;
    return result;
}
