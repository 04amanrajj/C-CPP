#include<stdio.h>

int main()
{
    int x,i=0;
    printf("Enter value");
    scanf("%d",&x);

    while (i<=x) 
    {
       printf("%d\n",i);
       i++;
    }
    
    return 0;
}