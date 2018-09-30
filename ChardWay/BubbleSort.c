#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

typedef int (*compute_cb)(int a,int b);

int *bubble_sort(int *numbers,int count,compute_cb cmp)

	{
	int *target;
	int i,temp,j;
	target=(int *)malloc(count*sizeof(int));

	//copying numbers in target using memcpy
	memcpy(target,numbers,count*sizeof(int));

	for(i=0;i<count;i++)
	{
		for(j=0;j<count-1;j++)
		{
			if(cmp(target[j],target[j+1])>0)
			{
				temp=target[j+1];
				target[j+1]=target[j];
				target[j]=temp;
			}

		}

	}

	return target;
	}

void test_by_print(int *numbers,int count,compute_cb cmp)

	{
		int *target=bubble_sort(numbers,count,cmp);
		int i=0;

		for(i=0;i<count;i++)

			{

			printf("%d ",target[i]);

			}
		
		printf("\n");

		unsigned char *data=(unsigned char *)cmp;
		
		for(i=0;i<25;i++)
		{
			printf("%x: ",data[i]);
		}
		
		printf("\nSuccessfully Sorted...!\n");

		free(target);
	}

int ascending(int a,int b)

	{
	return a-b;
	}

int descending(int a,int b)

	{
	return b-a;
	}

int main(int argc,char *argv[])
{

	int count;
	int *numbers;
	int i;

	count=argc-1;

	numbers=(int *)malloc(count*sizeof(int));

	for(i=0;i<count;i++)
		{

		numbers[i]=atoi(argv[i+1]);

		}

	test_by_print(numbers,count,ascending);
	test_by_print(numbers,count,descending);

	free(numbers);

}
