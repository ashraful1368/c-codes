#include<stdio.h>
int main ()
{
    int a;
    printf ("enter a number: ");
    scanf ("%d",&a);
    if (a>0 && a!=0)
    {
        printf ("it is a positive and non zero number");
    }
    else{
        printf ("it is not a positive and non zero number");
    }

    return 0;
}