#include<stdio.h>
int main()
{
printf("%lu\n",(long unsigned)-1);
if(sizeof(int)>-1)
	printf("True");
else
	printf("False");
}
