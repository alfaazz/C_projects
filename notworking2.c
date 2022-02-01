#include <stdio.h>

int main()
{
    int salary;
    printf("Enter your salary here\n");
    scanf("%d", &salary);
    int a, b, c;
    a=250000;
    b=500000;
    c=1000000;

    switch (salary)
    {
    case 1:
       if ((salary > a) && (salary < b))
        {
            printf("Yor tax is %d\n", salary-25000);
        }
    case 2:
        if ((salary > b) && (salary < c))
        {
            printf("Yor tax is %d\n", salary-500000);
        }
    case 3:
        if (salary > 1000000)
        {
            printf("Yor tax is %d\n", salary-1000000);
        }
    default:
        printf("Invalid input!!\n");
        break;
    }
    return 0;
}