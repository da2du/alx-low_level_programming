#include<stdio.h>
/**
*main - this is main function
*
*Return: Always 0 (Sucess)
*/
int main(void)
{
int sum=0;
int check=0;
int arr[10];
int i;
for (i = 0; i <= 9; i++)
{
	if (arr[i] % 2 == 0)
	{
		sum+=arr[i];
	}
	if (check == 0)
	{
		arr[i] = 1;
		arr[i+1] = 2;
	}
	else 
	{
	arr[i+2] = arr[i] + arr[i+1];
	}
}
	printf("%d",sum);	

}
