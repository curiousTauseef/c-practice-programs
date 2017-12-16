#include<stdio.h>
int main()
{
char str[100];
int i;
gets(str);
for(i=0;str[i];i++);
printf("String Length is : %d",i);
}
