#include<stdio.h>
#include<conio.h>

int main()
{
int a1,a2,a3;

printf("enter age of\n rahul\n rohit\n gita\n");
scanf("%d%d%d",&a1,&a2,&a3);

if(a1>a2)
	{
	if(a1>a3)
		{
		printf("rahul is eldest");
		}
	}
if(a2>a1)
	{
	if(a2>a3)
		{
		printf("rohit is eldest");
		}
	}
if(a3>a1)
	{
		if(a3>a2)
		{
		printf("gita is eldest");
		}
	}

	getch();
	return 0;
}