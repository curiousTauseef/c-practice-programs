//Selection Sorting

#include<stdio.h>
int main()
{
int arr[10],sorted[10];
int i,j,max,min,k;
printf("enter 10 elements of an array \n");
for(i=0;i<10;i++)
{
	scanf("%d",&arr[i]);
}

max=arr[0];

for(i=0;i<10;i++)
        {
                        if(arr[i]>=max)
			{
			max=arr[i];
			}
        }

min=arr[0];
for(j=0;j<10;j++)
{
for(i=0;i<10;i++)

        {
                        if(arr[i]<=min)
                        { 
                        min=arr[i];
			k=i;
                        }
		        
	}
	sorted[j]=min;
	arr[k]=max+1;
	min=arr[0];
}

	for(i=0;i<10;i++)
        {
		printf(" --- %d \n",sorted[i]);                
        }



}
