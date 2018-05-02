#include<stdio.h>
void printarray(int arr[],int start,int length)
{
if(start>=length)
return;
printf("%d \n",arr[start]);
return printarray(arr,start+1,length);
}
int main()
{
int array[10];
int i;
for(i=0;i<10;i++)
{
scanf("%d",&array[i]);
}

printarray(array,0,10);
}
