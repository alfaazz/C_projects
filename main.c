#include <stdio.h>

int main()
{
float i, r, p, n; 
float rate = .01;
//i=interest,r=rate of interest, n= number of years, p= principal

printf ("The rate of interest is %f\n");
scanf ("%f", &r);
printf ("The number of year is %f\n");
scanf ("%f", &n);
printf ("The Principal is %f\n");
scanf ("%f", &p);
printf ("The Simple Interest is %f\n", p*n*r*rate);
return 0;
}