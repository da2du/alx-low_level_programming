#include<stdio.h>
int main(void)
{
int i=0;
int j=0;
for (i=0; i<=8; i++)
{
	for (j=1;j<=9;j++)
	{
			if (i==8&&j==9)
			{
				putchar(j);
				putchar(i);
				putchar(',');
				putchar(' ');
			}
			else
 			{	putchar(i,j);
				putchar(j);
				putchar(' ');
			}
		}
}

return (0);
}
