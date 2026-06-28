#include<stdio.h>
int main ()
{
    int a,b;
    printf ("enter two number: ");
    scanf ("%d %d",&a,&b);
    if (a>0 && b<0)
    {
        printf ("one number is positive and the other is negative");

    }
    else if (a>0 && b>0)
    {
        printf ("both number is positive");
    }
    else {
        printf ("both number is negative ");
    }
    return 0;
}