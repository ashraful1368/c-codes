#include<stdio.h>
int main ()
{
    int a;
    printf ("enter a celcius degree: ");
    scanf ("%d",&a);
    int f=(a*9/5)+32;
    printf (" Fahrenheit degree=%d F",f);
    return 0;
}