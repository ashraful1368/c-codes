#include<stdio.h>
int main ()
{
    long long int N,M;
    scanf ("%lld %lld", &N,&M);
    long long int a[N][M];
    for (int i=0;i<N;i++)
    {

        for (int j=0;j<M;j++)
        {
            scanf ("%lld",&a[i][j]);
        }
    }
    int diagonal=0;
    int no=0;
    if (N==M)
    { for (int i=0;i<N;i++)
    {

        for (int j=0;j<M;j++)
        {
            if (i==j)
            {
                if (a[i][j] == 1)
                {
                    diagonal++;
                } else {
                    printf ("NO");
                    no++;
                    return 0;
                }
            } 
            if (i+j==N-1)
            {
                if (a[i][j]==1)
                {
                    diagonal++;

                } else {
                printf ("NO");
                no++;
                return 0;
            }
            } 
            if (i!=j && i+j != N-1)
            {
                if (a[i][j]!=0)
                {
                    printf ("NO");
                    no++;
                    return 0;

                }

            }
        }
    }
} else {
    printf ("NO");
}
if (diagonal ==N+M && no==0)
{
    printf ("YES");
}

    return 0;
}