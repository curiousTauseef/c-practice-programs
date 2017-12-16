#include<stdio.h>
#include<string.h>
int main()
{
char a[100],u[100];
int i,j;
printf("enter a new string in lower case\n");
gets(a);
for(i=0;i<a[i];i++);
/*for(j=0;j<i;j++)
{
u[j]=a[j]-32;
}
puts(u);*/
/*puts function works character by charater*/
for(j=0;j<i;j++)
putchar(toupper(a[j]));
return 0;
}
