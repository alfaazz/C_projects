#include <stdio.h>
int main()
{
    int a, b, c;
    int flag;
    printf("Type the number\n");
    scanf("%d", &a);
    b = a / 2;
    c+1;
    while (c<b)
    {
        if (a & c == 0)
        {
            printf("This is a prime number\n");
            break;
        }c++;
    }
    if(a==1){
        printf("this is not a prime number\n");
    }
    if(a==2){
        printf("this is a prime number\n");
    }
    if(flag==1){
        printf("This is not a prime number\n");
    }
    return 0;
}