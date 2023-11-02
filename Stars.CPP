#include<stdio.h>
int main ()
{
    int k,j;
    for (size_t i = 1; i <=5; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

