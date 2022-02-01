#include <stdio.h>
int main()
{
    int a, numbers;
    numbers = 1;
    printf("Enter the number:_\n");
    scanf("%d", &a);
    while (numbers < 10)
    {
        if ((a % numbers != numbers) || (a % numbers != 1))
        {
            printf("This is not a prime number\n");
        }
        else
        {
            printf("This is a prime number\n");
        }
        numbers++;
    }
    return 0;
}