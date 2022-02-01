#include <stdio.h>

int main()
{
    int year;
    printf("Enter The Year\n");
    scanf("%d", &year);
    int leap_or_not;
    leap_or_not = year%4;
    switch(leap_or_not)
    {
    case 0 :printf("It is a leap year\n");
    break;
    default : printf ("It is not a leap year\n");
    }
return 0;
}