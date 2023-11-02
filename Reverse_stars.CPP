#include<stdio.h>
int main ()
{
    for (size_t i = 5; i >=1; i--)
    {
        for (size_t j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

