#include<stdio.h>
int main ()
{
    int a,b;
    printf ("enter two number a and b: ");
    scanf ("%d %d", &a,&b);
    if (a>b)
    {
        printf ("a>b\n");
    }
    else{
        printf ("a<b\n");
    }
    if (a>=b)
    {
        printf ("a>=b\n");
    }
    else{
        printf ("a<=b\n");
    }
    if (a==b)
    {
        printf ("a==b\n");
    }
    else{
        printf ("a!=b");
    }

    return 0;
}
