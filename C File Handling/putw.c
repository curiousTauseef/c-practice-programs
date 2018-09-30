#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fptr;

fptr=fopen("raghav2.dat","wb");
int value;

for(value=1;value<=30;value++)
{
putw(value,fptr);
}

fclose(fptr);

return 0;
}
