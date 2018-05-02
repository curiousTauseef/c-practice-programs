#include<stdio.h>
int main()
{
int arr[10];
int i,max=0,min;
for( i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
for(i=0;i<10;i++)
	{
	if(arr[i]>=max)
	{
		max=arr[i];
	}
	}
printf("Max Elements is %d \n",max);
min=arr[0];
for(i=0;i<10;i++)
        {
        if(arr[i]<=min)
        {
                min=arr[i];
        }
        }
printf("Min Elements is %d \n",min);


}
