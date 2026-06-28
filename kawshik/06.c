#include<stdio.h>
int main ()
{
    int a,b;
    printf ("enter 2 number: ");
    scanf ("%d %d",&a,&b);
    if (a<0 || b<0)
    {
        printf ("at least one number is negative");
    }
    else{
        printf ("No number is negative");
    }
    return 0;
}