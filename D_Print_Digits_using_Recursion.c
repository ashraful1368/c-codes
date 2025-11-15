#include<stdio.h>
void recursion(int N)
{
    if (N==0)
    {
        return;
    }
    int x;
    x=N%10;
    int y=N/10;
     recursion(y);
    printf ("%d ",x);
   


}
int main ()
{
    int T;
    scanf ("%d",&T);
    int N;
    for (int i=1;i<=T;i++)
    {
        scanf ("%d",&N);
        if (N==0)
        {
            printf ("0");
        }
        
        recursion (N);
       printf ("\n");
    }

    return 0;
}