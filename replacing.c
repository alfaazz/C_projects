#include <stdio.h>
void swap(int *a, int *b);

    int main()
    {
        int a;
        int b;
        printf("Enter The Value of a\n");
        scanf("%d", &a);
        printf("Enter The Value of b\n");
        scanf("%d", &b);
        printf("THE VALUE OF A IS :%d\n", a);
        printf("THE VALUE OF B IS :%d\n", b);
        swap(&a,&b);
        printf("Now THE VALUE OF A IS :%d\n", a);
        printf("Now THE VALUE OF B IS :%d\n", b);

        return 0;
    }
   void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    }
