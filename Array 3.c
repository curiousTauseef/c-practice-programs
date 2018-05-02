//takes an array and a number 'k' as input from the user. Then it searches for
//Two elements in the array such that the sum of those two numbers is equal to 'k'.

#include<stdio.h>
int main()
{
int array[10];
int number;
int i,j;
printf("enter number");

scanf("%d",&number);
printf("enter elements of array");

for(i=0;i<10;i++)
	{
	scanf("%d",&array[i]);
	}

for(i=0;i<10;i++)
{
	for(j=i;j<10;j++)
	{
	if(array[i]+array[j]==number)
		{
		printf("%d %d \n",array[i],array[j]);
		}

	}
}
}
