#include<stdio.h>
int main(void)
{
for(int i=0; i<=8; i++)
{
	for (int j=1;j<=9;j++)
	{
			if (i==8&&j==9)
			{
				putchar(j);
				putchar(i);
				putchar(',');
				putchar(' ');
			}
			else
 			{	putchar(i);
				putchar(j);
				putchar(' ');
			}
		}
}

return (0);
}
