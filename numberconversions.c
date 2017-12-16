#include<stdio.h>
#include<stdlib.h>

int main()
{
char buffer[30];
int num;
printf("enter number");
scanf("%d",&num);
itoa(num,buffer,10);
printf("decimal : %s",buffer);
itoa(num,buffer,16);
printf("hexadecimal : %s",buffer);
itoa(num,buffer,2);
printf("binary : %s",buffer);

return 0;
}

