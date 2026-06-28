#include<stdio.h>
int main ()
{
    int a;
    printf ("enter a number: ");
    scanf("%d", &a);
    a+=10;
    printf ("after increasing it by 10= %d\n",a);
    a-=5;
    printf ("after decreasing it by 5= %d\n",a);
    return 0;
}