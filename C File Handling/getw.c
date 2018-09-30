#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *ptr;

ptr=fopen("raghav2.dat","rb");
int value,count=0;

while((value=getw(ptr))!=EOF)
{

printf("%d \n",value);

}

fclose(ptr);

return 0;


}
