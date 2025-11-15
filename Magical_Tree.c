#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N == 1)
    {
        int a = 1;
        int line = 6;
        for (int i = 1; i <= 6; i++)
        {
            for (int j = 1; j <= line - 1; j++)
            {
                printf(" ");
            }
            for (int k = 1; k <= a; k++)
            {
                printf("*");
            }
            a += 2;
            line--;
            printf("\n");
        }
        
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            printf (" ");

        }
        for (int k=1;k<=N;k++)
        {
            printf ("*");
        }
        printf ("\n");
    }
        return 0;
    }

    int x = N / 2;
    int line = 6 + x;
    int y = line;

    int a = 1;

    for (int i = 1; i <= line; i++)
    {
        for (int j = 1; j <= y - 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= a; k++)
        {
            printf("*");
        }
        a += 2;
        y--;
        printf("\n");

        
    }

    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=5;j++)
        {
            printf (" ");

        }
        for (int k=1;k<=N;k++)
        {
            printf ("*");
        }
        printf ("\n");
    }
    return 0;
}