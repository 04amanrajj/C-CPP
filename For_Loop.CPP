#include<stdio.h>

int main()
{
    int x,i;
    printf("Enter value");
    scanf("%d",&x);

    for (i = 0; i <= x; i++)
    {
        printf("%d\n",i);
    }
    return 0;
}