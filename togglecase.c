#include<stdio.h>
#include<string.h>
int main()
{
char str[100],c[100];
int i,j;
printf("enter a string with any case\n");
gets(str);
for(i=0;str[i];i++);
printf("length of string %d\n",i);
for(j=0;j<i;j++)
{
if(str[j]>='A' && str[j]<='Z')
{
str[j]=str[j]+32;
}
else if(str[j]>='a' && str[j] <='z')
{
str[j]=str[j]-32;
}
}
printf("String with Toggled Case is :");
puts(str);
return 0;
}
