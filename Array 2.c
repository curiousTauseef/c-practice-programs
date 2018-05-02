#include<stdio.h>
int main()
{
int arr[10];
int num,i;
printf("enter a number to search \n ");
scanf("%d",&num);
for(i=0;i<10;i++)
        {
        
		scanf("%d",&arr[i]);
        
        }
for(i=0;i<10;i++)
        {
        if(arr[i]==num)
        {
                printf("Array Index which matches is: %d  \n",i);
        }
        }
}
